#ifndef program_h
#define program_h

#include <string>
#include "../lib/list.h"
#include "../lib/utils.h"

#define identation "    "

class Expression
{
public:
    virtual void pretty_print() const = 0;
    virtual std::string to_string() const = 0;
    virtual ~Expression() = default;
};

class Value : public Expression
{
public:
    virtual void pretty_print() const = 0;
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

    void pretty_print() const override
    {
        std::string str;
        str += "\"" + value + "\"";
        std::cout << str;
    }

    std::string to_string() const override
    {
        return "String(" + value + ")";
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
        return "Integer(" + std::to_string(value) + ")";
    }
    void pretty_print() const override
    {
        std::string str;
        str += std::to_string(value);
        std::cout << str;
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
        return "Float(" + std::to_string(value) + ")";
    }
    void pretty_print() const override
    {
        std::string str;
        str += std::to_string(value);
        std::cout << str;
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
        std::string str = value ? "true" : "false";
        return ("Boolean(" + str + ")");
    }
    void pretty_print() const override
    {
        std::string str;
        str += (value ? "true" : "false");
        std::cout << str;
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
        return "Variable(" + name + ")";
    }
    void pretty_print() const override
    {
        std::string str;
        str += name;
        std::cout << str;
    }
    Variable(std::string str)
    {
        name = str;
    }
    std::string name;
};

class ArrayAtoms : public Expression
{
public:
    std::string to_string() const override
    {
        return ("ArrayAtoms(" + name + " " + e->to_string() + ")");
    }
    void pretty_print() const override
    {
        std::cout << name << "[";
        e->pretty_print();
        std::cout << "]";
    }
    ArrayAtoms(std::string name, Expression *e)
    {
        this->name = name;
        this->e = e;
    }
    ~ArrayAtoms()
    {
        delete e;
    }
    Expression *e;
    std::string name;
};

class BinOp : public Expression
{
public:
    std::string to_string() const override
    {
        return ("BinOp(" + a->to_string() + " " + to_string_op(op) + " " + b->to_string() + ")");
    }
    void pretty_print() const override
    {
        std::cout << "(";
        a->pretty_print();
        std::cout << " " << to_string_op(op) + " ";
        b->pretty_print();
        std::cout << ")";
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
        return ("UnOp(" + to_string_op(op) + " " + a->to_string() + ")");
    }
    void pretty_print() const override
    {
        std::cout << "(" + to_string_op(op) + " ";
        a->pretty_print();
        std::cout << ")";
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

class CallFunctionExpr : public Expression
{
public:
    std::string to_string() const override
    {
        std::string str = "CallFunctionExpr(" + name + ", List(";

        for (size_t i = 0; i < param.length; i++)
        {
            if (i > 0)
            {
                str += ", ";
            }
            str += param[i]->to_string();
        }
        return str + "))";
    }
    void pretty_print() const override
    {
        std::cout << name + "(";

        for (size_t i = 0; i < param.length; i++)
        {
            if (i > 0)
            {
                std::cout << ", ";
            }
            param[i]->pretty_print();
        }
        std::cout << ")";
    }
    CallFunctionExpr(std::string name, List<Expression *> param)
    {
        this->name = name;
        this->param = param;
    };
    ~CallFunctionExpr()
    {
        for (size_t i = 0; i < param.length; i++)
        {
            delete param[i];
        }
    }
    std::string name;
    List<Expression *> param;
};

class Instruction
{
public:
    virtual void pretty_print(int ident) const = 0;
    virtual std::string to_string() const = 0;
    virtual ~Instruction() = default;
};

class If : public Instruction
{
public:
    std::string to_string() const override
    {
        std::string str = "If(" + expr->to_string() + ", ";
        str += Tinstr->to_string();
        if (!Einstr.isEmpty())
        {
            str += ", ";
            str += (*Einstr.get())->to_string();
        }
        return str + ")";
    }

    void pretty_print(int ident) const override
    {
        for (int i = 0; i < ident; i++)
        {
            std::cout << identation;
        }
        std::cout << "if ";
        expr->pretty_print();
        std::cout << std::endl;
        Tinstr->pretty_print(ident);
        if (!Einstr.isEmpty())
        {
            std::cout << "else" << std::endl;
            (*Einstr.get())->pretty_print(ident);
        }
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
        std::string str = "While(" + expr->to_string() + ", ";
        str += Tinstr->to_string();
        return str + ")";
    }

    void pretty_print(int ident) const override
    {
        for (int i = 0; i < ident; i++)
        {
            std::cout << identation;
        }
        std::cout << "if ";
        expr->pretty_print();
        std::cout << std::endl;
        Tinstr->pretty_print(ident);
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
        std::string str = "Declaration(" + TypeToString(type) + ", " + name;
        if (!value.isEmpty())
        {
            str += ", " + value.get()->to_string();
        }
        if(!arr_size.isEmpty()) {
            str += ", ";
            str += arr_size.get()->to_string();
        }
        return str + ")";
    }
    void pretty_print(int ident) const override
    {
        for (int i = 0; i < ident; i++)
        {
            std::cout << identation;
        }
        std::cout << TypeToString(type) <<" " << name;
        if (!value.isEmpty())
        {
            std::cout << " = ";
            value.get()->pretty_print();
        }
        if(!arr_size.isEmpty()) {
            std::cout << " size" << (*arr_size.get());
        }
        std::cout << ";" << std::endl;
    }
    Declaration(Type t, Optional<List<Integer>> arr_size, std::string name, Optional<Expression> v)
    {
        this->type = t;
        this->name = name;
        this->value = v;
        this->arr_size = arr_size;
    }
    ~Declaration()
    {
        if (!value.isEmpty())
        {
            delete value.get();
        }
    }
    Type type;
    std::string name;
    Optional<Expression> value;
    Optional<List<Integer>> arr_size;
};

class Affectation : public Instruction
{
public:
    std::string to_string() const override
    {
        return "Affectation(" + name + ", " + e->to_string() + ")";
    }
    void pretty_print(int ident) const override
    {
        for (int i = 0; i < ident; i++)
        {
            std::cout << identation;
        }
        std::cout << name << " = ";
        e->pretty_print();
        std::cout << ";" << std::endl;
    }
    Affectation(std::string name, Expression *e)
    {
        this->name = name;
        this->e = e;
    }
    ~Affectation()
    {
        delete e;
    }
    std::string name;
    Expression *e;
};

class Return : public Instruction
{
public:
    std::string to_string() const override
    {
        return "return(" + e->to_string() + ")";
    }
    void pretty_print(int ident) const override
    {
        for (int i = 0; i < ident; i++)
        {
            std::cout << identation;
        }
        std::cout << "return ";
        e->pretty_print();
        std::cout << ";" << std::endl;
    }
    Return(Expression *e)
    {
        this->e = e;
    }
    ~Return()
    {
        delete e;
    }
    Expression *e;
};

class CallFunction : public Instruction
{
public:
    std::string to_string() const override
    {
        return expr->to_string();
    }
    void pretty_print(int ident) const override
    {
        for (int i = 0; i < ident; i++)
        {
            std::cout << identation;
        }
        expr->pretty_print();
        std::cout << ";" << std::endl;
    }
    CallFunction(std::string name, List<Expression *> param)
    {
        this->expr = new CallFunctionExpr(name, param);
    };
    ~CallFunction()
    {
        delete expr;
    }
    CallFunctionExpr *expr;
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
        std::string str = "Block(";
        for (size_t i = 0; i < instrs.length; i++)
        {
            if (i > 0)
                str += ", ";
            str += instrs[i]->to_string();
        }
        return str + ")";
    }
    void pretty_print(int ident) const override
    {
        for (int i = 0; i < ident; i++)
        {
            std::cout << identation;
        }
        std::cout << "{" << std::endl;
        for (size_t i = 0; i < instrs.length; i++)
        {
            instrs[i]->pretty_print(ident + 1);
        }
        for (int i = 0; i < ident; i++)
        {
            std::cout << identation;
        }
        std::cout << "}" << std::endl;
    }
    Block(List<Instruction *> instr)
    {
        this->instrs = instr;
    }
    ~Block()
    {
        for (size_t i = 0; i < instrs.length; i++)
        {
            delete instrs[i];
        }
    }
    List<Instruction *> instrs;
};

class Function
{
public:
    virtual std::string to_string() const = 0;
    virtual void pretty_print(int ident) const = 0;
    virtual ~Function() = default;
};

class Definition : public Function
{
public:
    typedef struct
    {
        Type type;
        std::string name;
    } Parameter;

    std::string to_string() const override
    {
        std::string str = "Definition(" + TypeToString(ret) + ", " + name + ", List(";
        for (size_t i = 0; i < param.length; i++)
        {
            if (i > 0)
            {
                str += ", ";
            }
            str += ("Parameter(" + TypeToString(param[i].type) + ", " + param[i].name + ")");
        }
        str += "), ";
        str += instr->to_string();
        return str + ")";
    }
    void pretty_print(int ident) const override
    {
        std::cout << TypeToString(ret) << " " << name << "(";
        for (size_t i = 0; i < param.length; i++)
        {
            if (i > 0)
            {
                std::cout << ", ";
            }
            std::cout << (TypeToString(param[i].type) + " " + param[i].name);
        }
        std::cout << ")" << std::endl;
        instr->pretty_print(ident);
    }
    Definition(Type ret, std::string name, List<Parameter> param, Instruction *instr)
    {
        this->ret = ret;
        this->name = name;
        this->param = param;
        this->instr = instr;
    }
    ~Definition()
    {
        delete instr;
    }
    Type ret;
    std::string name;
    List<Parameter> param;
    Instruction *instr;
};

class Program
{

public:
    void pretty_print(int ident) const
    {
        for (size_t i = 0; i < fs.length; i++)
        {
            fs[i]->pretty_print(ident);
        }
    }

    std::string to_string() const
    {
        std::string str = "";
        for (size_t i = 0; i < fs.length; i++)
        {
            str += fs[i]->to_string();
        }
        return str + "\n";
    }

    Program(List<Function *> fs)
    {
        this->fs = fs;
    }
    ~Program()
    {
        for (size_t i = 0; i < fs.length; i++)
        {
            delete fs[i];
        }
    }
    List<Function *> fs;
};

#include "../lib/operator_out.h"

#endif