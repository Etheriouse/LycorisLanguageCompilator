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

class Integer : public Expression
{
public:
    std::string to_string() const override
    {
        return std::to_string(value);
    }
    Integer(int n) {
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
    Float(float x) {
        value = x;
    }
    float value;
};

class Boolean : public Expression
{
public:
    std::string to_string() const override
    {
        if(value) {
            return "true";
        } else {
            return "false";
        }
    }
    Boolean(bool b) {
        value = b;
    }
    bool value;
};

enum class Operator {
    // Arithmetic
    Add,
    Sub,
    Mul,
    Div,
    Mod,
    Minus,

    //Logic
    And,
    Or,
    Xor,
    Not,

    //Comparison
    Eq,
    Neq,
    Le,
    Lt,
    Ge,
    Gt
};

std::string to_string_op(Operator op) {
    switch (op)
    {
    case Operator::Add:
        return "+";
    case Operator::Sub:
        return "-";
    case Operator::Mul:
        return "*";
    case Operator::Div:
        return "/";
    case Operator::Mod:
        return "%";
    case Operator::Minus:
        return "-";
    case Operator::And:
        return "&&";
    case Operator::Or:
        return "||";
    case Operator::Xor:
        return "<>";
    case Operator::Not:
        return "!";
    case Operator::Eq:
        return "==";
    case Operator::Neq:
        return "!=";
    case Operator::Lt:
        return "<";
    case Operator::Le:
        return "<=";
    case Operator::Gt:
        return ">";
    case Operator::Ge:
        return ">=";
    }
    return "error operator not defined";
}

class BinOp : public Expression
{
public:
    std::string to_string() const override
    {
        return ("("+a->to_string() + " " + to_string_op(op) + " " + b->to_string()+")");
    }
    BinOp(Expression *a, Operator op, Expression *b) {
        this->a = a;
        this->b = b;
        this->op = op;
    }
    ~BinOp() {
        delete a;
        delete b;
    }
    Expression* a, * b;
    Operator op;
};

class UnOp : public Expression
{
    public:
    std::string to_string() const override
    {
        return ("("+to_string_op(op) + " " + a->to_string()+")");
    }
    UnOp(Operator op, Expression *a) {
        this->a = a;
        this->op = op;
    }
    ~UnOp() {
        delete a;
    }
    Expression* a;
    Operator op;
};

std::ostream& operator<<(std::ostream& os, const Expression& expr)
{
    return os << expr.to_string();
}

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