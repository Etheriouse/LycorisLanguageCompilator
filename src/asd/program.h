#ifndef program_h
#define program_h

#include <string>
#include <map>
#include "../lib/list.h"

class Expression
{
public:
    virtual std::string to_string() const = 0;
    virtual ~Expression() = default;
};

enum class Operator
{
    // Arithmetic
    Add,
    Sub,
    Mul,
    Div,
    Mod,
    Minus,

    // Logic
    And,
    Or,
    Xor,
    Not,

    // Comparison
    Eq,
    Neq,
    Le,
    Lt,
    Ge,
    Gt
};

#include "../lib/utils.h"

class String : public Expression
{
public:
    std::string to_string() const override
    {
        return "\""+value+"\"";
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

// class Instruction
// {
// public:
//     virtual std::string to_string() = 0;
// };

// class IfInst : Instruction
// {

// public:
//     IfInst();
//     std::string to_string();

//     List<Instruction> instr;
//     Expression expr;
// };

// class Program
// {

// public:
//     List<Instruction> instrs;
// };

#endif