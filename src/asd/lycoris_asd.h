#ifndef lycoris_asd_h
#define lycoris_asd_h

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

#include "operator_tad.h"
#include "optional.h"
#include "../lib/utils.h"

using namespace std;

#define tab "   "

/* Define interface */

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
    virtual string to_string() const override = 0;
    virtual int getInt() { throw runtime_error("Not an int"); }
    virtual bool getBool() { throw runtime_error("Not a bool"); }
    virtual float getFloat() { throw runtime_error("Not a float"); }
    virtual string getString() { throw runtime_error("Not an string"); }
    virtual char getChar() { throw runtime_error("Not a char"); }
};

class Instruction
{
public:
    virtual void pretty_print(int ident) const = 0;
    virtual std::string to_string() const = 0;
    virtual ~Instruction() = default;
};

/* Define TAD */

class String : public Value
{
public:
    String(string str) : str(str) {};
    string getString() { return str; }
    string to_string() const override { return "String(" + str + ")"; }
    void pretty_print() const override { cout << "\"" << str << "\""; };
    string str;
};

class Integer : public Value
{
public:
    Integer(int n) : n(n) {};
    int getInt() { return n; }
    string to_string() const override { return "Integer(" + std::to_string(n) + ")"; }
    void pretty_print() const override { cout << n; };
    int n;
};

class Float : public Value
{
public:
    Float(float x) : x(x) {};
    float getFloat() { return x; }
    string to_string() const override { return "Float(" + std::to_string(x) + ")"; }
    void pretty_print() const override { cout << x; };
    float x;
};

class Bool : public Value
{
public:
    Bool(bool b) : b(b) {};
    bool getBool() { return b; }
    string to_string() const override { return "Bool(" + std::to_string(b) + ")"; }
    void pretty_print() const override { cout << (b ? "true" : "false"); };
    bool b;
};

class Char : public Value
{
public:
    Char(char c) : c(c) {};
    char getChar() { return c; }
    string to_string() const override
    {
        ;
        return "Char(" + std::to_string(c) + ")";
    }
    void pretty_print() const override { cout << "'" << c << "'"; };
    char c;
};

class ArrayAtom : public Expression
{
public:
    ArrayAtom(string name, vector<Expression *> expr) : name(name), index(expr) {};
    string to_string() const override
    {
        string s = "ArrayAtom(" + name;
        for (auto exp : index)
        {
            s += ", ";
            s += exp->to_string();
        };
        return s + ")";
    }
    void pretty_print() const override
    {
        cout << name;
        for (auto exp : index)
        {
            cout << "[";
            exp->pretty_print();
            cout << "]";
        };
    };
    string name;
    vector<Expression *> index;
};

class Variable : public Expression
{
public:
    Variable(string name) : name(name) {};
    string to_string() const override { return "Variable(" + name + ")"; }
    void pretty_print() const override { cout << name; };
    string name;
};

class Unary : public Expression
{
public:
    Unary(Operator op, Expression *expr) : op(op), a(expr) {};
    string to_string() const override { return "Unary(" + (op.to_string()) + ", " + a->to_string() + ")"; }
    void pretty_print() const override
    {
        op.pretty_print();
        a->pretty_print();
    };
    Operator op;
    Expression *a;
};

class Binop : public Expression
{
public:
    Binop(Operator op, Expression *expr1, Expression *expr2) : op(op), a(expr1), b(expr2) {};
    string to_string() const override { return "Binop(" + (op.to_string()) + ", " + a->to_string() + ", " + b->to_string() + ")"; }
    void pretty_print() const override
    {
        a->pretty_print();
        cout << " ";
        op.pretty_print();
        cout << " ";
        b->pretty_print();
    };
    Operator op;
    Expression *a;
    Expression *b;
};

class Call : public Expression
{
public:
    Call(string name, vector<Expression *> list) : name(name), parameters(list) {};
    string to_string() const override
    {
        string s = "Call(";
        int i = 0;
        for (auto exp : parameters)
        {
            if (i > 0)
                s += ", ";
            s += exp->to_string();
            i++;
        };
        return s + ")";
    }
    void pretty_print() const override
    {
        cout << name << "(";
        int i = 0;
        for (auto exp : parameters)
        {
            if (i > 0)
                cout << ", ";
            exp->pretty_print();
            i++;
        };
        cout << ")";
    };
    string name;
    vector<Expression *> parameters;
};

class Ternary : public Expression {
    public:
    Ternary(Expression *a, Expression *b, Expression *c): a(a), b(b), c(c) {};
    string to_string() const override { return "Ternary(" + a->to_string() + ", " + b->to_string() + ", " + c->to_string() + ")"; }
    void pretty_print() const override {
        a->pretty_print();
        cout << " ? ";
        b->pretty_print();
        cout << " : ";
        c->pretty_print();
    }
    Expression *a, *b, *c;
};

class If : public Instruction
{
public:
    If(Expression *expr, Instruction *inst) : condition(expr), ifblock(inst), elseblock(Optional<Instruction>::empty()) {}
    If(Expression *expr, Instruction *inst1, Instruction *inst2) : condition(expr), ifblock(inst1), elseblock(Optional<Instruction>::of(inst2)) {}
    std::string to_string() const override { return "If(" + condition->to_string() + ", " + ifblock->to_string() + (elseblock.isPresent() ? ", " + elseblock.get()->to_string() + ")" : ")"); };
    void pretty_print(int ident) const override
    {
        cout << "if (";
        condition->pretty_print();
        cout << ") ";
        ifblock->pretty_print(ident + 1);
        if (elseblock.isPresent())
        {
            cout << "else ";
            elseblock.get()->pretty_print(ident + 1);
        }
    }
    Expression *condition;
    Instruction *ifblock;
    Optional<Instruction> elseblock;
};

class While : public Instruction
{
public:
    While(Expression *expr, Instruction *inst) : condition(expr), block(inst) {}
    std::string to_string() const override { return "While(" + condition->to_string() + ", " + block->to_string() + ")"; }
    void pretty_print(int ident) const override
    {
        cout << "while (";
        condition->pretty_print();
        cout << ")";
        block->pretty_print(ident + 1);
    }
    Expression *condition;
    Instruction *block;
};

class Affectation : public Instruction
{
public:
    Affectation(string name, Expression *expr) : name(name), value(expr), index(vector<Expression *>()) {};
    Affectation(string name, Expression *expr1, vector<Expression *> expr2) : name(name), value(expr1), index(expr2) {};
    std::string to_string() const override
    {
        string str = "Affectation(" + name + ", ";
        for (auto ind : index)
        {
            str += ind->to_string();
            str += ", ";
        }
        return str + value->to_string() + ")";
    }
    void pretty_print(int ident) const override
    {
        cout << name;
        for (auto ind : index)
        {
            cout << "[";
            ind->pretty_print();
            cout << "]";
        }
        cout << "=";
        value->pretty_print();
        cout << ";";
    }
    string name;
    Expression *value;
    vector<Expression *> index;
};

class Declaration : public Instruction
{
public:
    typedef struct
    {
        string name;
        Optional<Expression> value;
    } Declare;

    Declaration(Type type, vector<Declare> content) : type(type), variables(content) {};
    std::string to_string() const override
    {
        std::string str = "Declaration(" + type.to_string();
        for (Declare d : variables)
        {
            str += ", ";
            str += "(" + d.name;
            if (d.value.isPresent())
            {
                str += ", " + d.value.get()->to_string();
            }
            str += ")";
        }
        return str + ")";
    }
    void pretty_print(int ident) const override
    {
        cout << type.to_string() << " ";
        int i = 0;
        for (Declare d : variables)
        {
            if (i > 0)
                cout << ", ";
            cout << d.name;
            if (d.value.isPresent())
            {
                cout << " = ";
                d.value.get()->pretty_print();
            }
            i++;
        }
        cout << ";";
    }
    Type type;
    vector<Declare> variables;
};

class For : public Instruction
{
public:
    For() : initIterator(Optional<Declaration>::empty()),
            condition(Optional<Expression>::empty()),
            afterOperation(Optional<Affectation>::empty()) {};
    For(Declaration *decla) : initIterator(Optional<Declaration>::of(decla)),
                              condition(Optional<Expression>::empty()),
                              afterOperation(Optional<Affectation>::empty()) {};
    For(Expression *condition) : initIterator(Optional<Declaration>::empty()),
                                 condition(Optional<Expression>::of(condition)),
                                 afterOperation(Optional<Affectation>::empty()) {};
    For(Affectation *aff) : initIterator(Optional<Declaration>::empty()),
                            condition(Optional<Expression>::empty()),
                            afterOperation(Optional<Affectation>::of(aff)) {};
    For(Declaration *decla, Expression *condition) : initIterator(Optional<Declaration>::of(decla)),
                                                     condition(Optional<Expression>::of(condition)),
                                                     afterOperation(Optional<Affectation>::empty()) {};
    For(Declaration *decla, Affectation *aff) : initIterator(Optional<Declaration>::of(decla)),
                                                condition(Optional<Expression>::empty()),
                                                afterOperation(Optional<Affectation>::of(aff)) {};
    For(Expression *condition, Affectation *aff) : initIterator(Optional<Declaration>::empty()),
                                                   condition(Optional<Expression>::of(condition)),
                                                   afterOperation(Optional<Affectation>::of(aff)) {};
    For(Declaration *decla, Expression *condition, Affectation *aff) : initIterator(Optional<Declaration>::of(decla)),
                                                                       condition(Optional<Expression>::of(condition)),
                                                                       afterOperation(Optional<Affectation>::of(aff)) {};
    std::string to_string() const override
    {
        std::string str = "For(";
        std::vector<std::string> parts;

        if (initIterator.isPresent())
            parts.push_back(initIterator.get()->to_string());

        if (condition.isPresent())
            parts.push_back(condition.get()->to_string());

        if (afterOperation.isPresent())
            parts.push_back(afterOperation.get()->to_string());

        str += join(parts, ", ");
        return str += ")";
    }

    void pretty_print(int ident) const override
    {
        cout << "for(";
        if (initIterator.isPresent())
            initIterator.get()->pretty_print(ident);
        cout << ";";
        if (condition.isPresent())
            condition.get()->pretty_print();
        cout << ";";
        if (afterOperation.isPresent())
            afterOperation.get()->pretty_print(ident);
        cout << ")";
        block->pretty_print(ident + 1);
    }
    Optional<Declaration> initIterator;
    Optional<Expression> condition;
    Optional<Affectation> afterOperation;
    Instruction *block; // TODO la rajouter dans tout les constructeur
};

class Return : public Instruction
{
public:
    Return(Expression *expr) : value(expr) {};
    std::string to_string() const override { return "Return(" + value->to_string() + ")"; }
    void pretty_print(int ident) const override
    {
        cout << "return ";
        value->pretty_print();
        cout << ";";
    }
    Expression *value;
};

class CallInstruction : public Instruction
{
public:
    CallInstruction(Call *c) : call(c) {};
    std::string to_string() const override { return call->to_string(); }
    void pretty_print(int ident) const override { call->pretty_print();cout<<";"; }
    Call *call;
};

class Block : public Instruction
{
public:
    Block(vector<Instruction *> instrs) : instructions(instrs) {};
    std::string to_string() const override
    {
        std::string str = "Block(";
        std::vector<std::string> parts;

        for (auto inst : instructions)
        {
            parts.push_back(inst->to_string());
        }

        str += join(parts, ", ");
        return str += ")";
    }

    void pretty_print(int ident) const override
    {
        cout << endl;
        for (int i = 0; i < ident - 1; i++)
        {
            cout << tab;
        }
        cout << "{" << endl;
        for (auto instr : instructions)
        {
            for (int i = 0; i < ident; i++)
            {
                cout << tab;
            }
            instr->pretty_print(ident);
            cout << endl;
        }
        for (int i = 0; i < ident - 1; i++)
        {
            cout << tab;
        }
        cout << "}" << endl;
    }

    vector<Instruction *> instructions;
};

class Definition
{
public:
    typedef struct {
        Type t;
        string name;
    } Parameter;

    Definition(Type t, string name, vector<Parameter> list, Instruction *i) : t(t), name(name), parameters(list), block(i) {};
    std::string to_string() const
    {
        string str = "Definition(" + t.to_string() + ", " + name;
        for(auto p : parameters) {
            str+=(", " + p.t.to_string() + " " + p.name);
        }
        str += block->to_string();
        return str + ")";
    }
    void pretty_print(int ident) const
    {
        cout << t.to_string() << " " << name << "(";
        int i = 0;
        for(auto p : parameters) {
            if(i > 0) cout << ", ";
            cout << p.t.to_string() << " " << p.name;
        }
        cout << ")";
        block->pretty_print(ident+1);
    }
    Type t;
    string name;
    vector<Parameter> parameters;
    Instruction *block;
};

class Program
{
public:
    Program(vector<Definition *> defs) : defs(defs) {};
    std::string to_string() const
    {
        string str = "Program(";
        for (auto def : defs)
        {
            str += def->to_string();
        }
        return str + ")";
    }
    void pretty_print(int ident) const
    {
        for (auto def : defs)
        {
            def->pretty_print(0);
        }
    }
    vector<Definition *> defs;
};
#endif