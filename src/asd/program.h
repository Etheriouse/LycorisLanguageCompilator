#ifndef program_h
#define program_h

#include <string>
#include "../lib/list.h"
#include "../lib/utils.h"

class Expression
{
public:
    virtual std::string to_string() const = 0;
    virtual ~Expression() = default;
};

class String : public Expression
{
public:
    std::string to_string() const override
    {
        return "\"" + value + "\"";
    }
    String(std::string s)
    {
        value = s;
    }
    std::string value;
};

class Integer : public Expression
{
public:
    std::string to_string() const override
    {
        return std::to_string(value);
    }
    Integer(int n)
    {
        value = n;
    }
    int value;
};

class Float : public Expression
{
public:
    std::string to_string() const override
    {
        return std::to_string(value);
    }
    Float(float x)
    {
        value = x;
    }
    float value;
};

class Boolean : public Expression
{
public:
    std::string to_string() const override
    {
        if (value)
        {
            return "true";
        }
        else
        {
            return "false";
        }
    }
    Boolean(bool b)
    {
        value = b;
    }
    bool value;
};

class BinOp : public Expression
{
public:
    std::string to_string() const override
    {
        return ("(" + a->to_string() + " " + to_string_op(op) + " " + b->to_string() + ")");
    }
    BinOp(Expression *a, Operator op, Expression *b)
    {
        this->a = a;
        this->b = b;
        this->op = op;
    }
    ~BinOp()
    {
        delete a;
        delete b;
    }
    Expression *a, *b;
    Operator op;
};

class UnOp : public Expression
{
public:
    std::string to_string() const override
    {
        return ("(" + to_string_op(op) + " " + a->to_string() + ")");
    }
    UnOp(Operator op, Expression *a)
    {
        this->a = a;
        this->op = op;
    }
    ~UnOp()
    {
        delete a;
    }
    Expression *a;
    Operator op;
};

class Instruction
{
public:
    virtual std::string to_string() const = 0;
    virtual ~Instruction() = default;
};

class If : public Instruction
{
public:
    std::string to_string() const override
    {
        std::string str = "if" + expr->to_string() + "{\n";

        for (size_t i = 0; i < Tinstr.length; i++)
        {
            str += Tinstr[i]->to_string();
        }
        if (!Einstr.isEmpty())
        {
            str += "} else {\n";
            List<Instruction *> e = (*Einstr.get());
            for (size_t i = 0; i < Tinstr.length; i++)
            {
                str += e[i]->to_string();
            }
        }
        return str + "}\n";
    }

    If(Expression *expr, List<Instruction *> tinstr, Optional<List<Instruction *>> einstr)
    {
        this->expr = expr;
        this->Tinstr = tinstr;
        this->Einstr = einstr;
    }

    ~If()
    {
        delete expr;
        for (size_t i = 0; i < Tinstr.length; i++)
        {
            delete Tinstr[i];
        }
        if (!Einstr.isEmpty())
        {
            List<Instruction *> e = (*Einstr.get());
            for (size_t i = 0; i < Tinstr.length; i++)
            {
                delete e[i];
            }
        }
    }

    List<Instruction *> Tinstr;           // then
    Optional<List<Instruction *>> Einstr; // else
    Expression *expr;
};

class While : public Instruction
{
public:
    std::string to_string() const override
    {
        std::string str = "while" + expr->to_string() + "{\n";

        for (size_t i = 0; i < Tinstr.length; i++)
        {
            str += Tinstr[i]->to_string();
        }
        return str + "}\n";
    }

    While(Expression *expr, List<Instruction *> tinstr)
    {
        this->expr = expr;
        this->Tinstr = tinstr;
    }

    ~While()
    {
        delete expr;
        for (size_t i = 0; i < Tinstr.length; i++)
        {
            delete Tinstr[i];
        }
    }

    List<Instruction *> Tinstr;           // then
    Expression *expr;
};


class Program
{

public:

    Program(List<Instruction*> instrs) {
        this->instrs = instrs;
    }
    List<Instruction*> instrs;

    ~Program() {
        for (size_t i = 0; i < instrs.length; i++)
        {
            delete instrs[i];
        }
    }
};

#include "../lib/operator_out.h"

#endif