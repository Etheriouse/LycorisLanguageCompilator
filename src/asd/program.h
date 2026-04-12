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

class Value : public Expression
{
public:
    virtual std::string to_string() const override = 0;
    virtual int getInt() { throw std::runtime_error("Not an int"); }
    virtual bool getBool() { throw std::runtime_error("Not an bool"); }
    virtual float getFloat() { throw std::runtime_error("Not an float"); }
    virtual std::string getString() { throw std::runtime_error("Not an string"); }
};

class String : public Value
{
public:
    std::string getString() override
    {
        return value;
    }

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

class Integer : public Value
{
public:
    int getInt() override
    {
        return value;
    }
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

class Float : public Value
{
public:
    float getFloat() override
    {
        return value;
    }
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

class Boolean : public Value
{
public:
    bool getBool() override
    {
        return value;
    }
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

class Variable : public Expression
{
public:
    std::string to_string() const override
    {
        return "var: " + name;
    }
    Variable(std::string str)
    {
        name = str;
    }
    std::string name;
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
        std::string str = "if" + expr->to_string() + "\n";
        str += Tinstr->to_string();
        if (!Einstr.isEmpty())
        {
            str += "else\n";
            str += (*Einstr.get())->to_string();
        }
        return str + "\n";
    }

    If(Expression *expr, Instruction *tinstr, Optional<Instruction *> einstr)
    {
        this->expr = expr;
        this->Tinstr = tinstr;
        this->Einstr = einstr;
    }

    ~If()
    {
        delete expr;
        delete Tinstr;
        if (!Einstr.isEmpty())
        {
            delete (*Einstr.get());
        }
    }

    Instruction *Tinstr;            // then
    Optional<Instruction *> Einstr; // else
    Expression *expr;
};

class While : public Instruction
{
public:
    std::string to_string() const override
    {
        std::string str = "while" + expr->to_string() + "\n";
        str += Tinstr->to_string();
        return str + "}\n";
    }

    While(Expression *expr, Instruction *tinstr)
    {
        this->expr = expr;
        this->Tinstr = tinstr;
    }

    ~While()
    {
        delete expr;
        delete Tinstr;
    }

    Instruction *Tinstr; // then
    Expression *expr;
};

class Declaration : public Instruction
{
public:
    std::string to_string() const override
    {
        return TypeToString(type) + " " + name + " = " + value->to_string();
    }
    Declaration(Type t, std::string name, Expression *v)
    {
        this->type = t;
        this->name = name;
        this->value = v;
    }
    ~Declaration()
    {
        delete value;
    }
    Type type;
    std::string name;
    Expression *value;
};

class Affectation : public Instruction
{
public:
    std::string to_string() const override
    {
        return name + " = " + e->to_string();
    }
    Affectation(std::string name, Expression *e)
    {
        this->name = name;
        this->e = e;
    }
    std::string name;
    Expression *e;
};

class Block : public Instruction
{

public:
    static Instruction *getEmpty()
    {
        List<Instruction *> list;
        return new Block(list);
    }

    std::string to_string() const override
    {
        std::string str = "{\n";
        for (size_t i = 0; i < instrs.length; i++)
        {
            str += "  ";
            str += instrs[i]->to_string() + "\n";
        }
        return str + "}";
    }

    Block(List<Instruction *> instr)
    {
        this->instrs = instr;
    }
    List<Instruction *> instrs;
};

class Program
{

public:
    std::string to_string() const
    {
        std::string str = "main() ";
        str += instrs->to_string();
        return str + "\n";
    }

    Program(Instruction *instrs)
    {
        this->instrs = instrs;
    }
    Instruction *instrs;

    ~Program()
    {
        delete instrs;
    }
};

#include "../lib/operator_out.h"

#endif