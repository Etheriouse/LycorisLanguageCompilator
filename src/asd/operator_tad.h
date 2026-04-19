#ifndef operator_tad_h
#define operator_tad_h

#include <memory>
#include <string>
#include <sstream>
#include <iostream>

class Type
{
public:
    enum raw
    {
        int_,
        float_,
        char_,
        str_,
        bool_,
        array_,
        ptr_,
        void_,
        null_
    };

    static Type fromStr(std::string str)
    {
        if (str == "int")
        {
            return Type::Integer();
        }
        else if (str == "float")
        {
            return Type::Float();
        }
        else if (str == "char")
        {
            return Type::Char();
        }
        else if (str == "string")
        {
            return Type::String();
        }
        else if (str == "bool")
        {
            return Type::Bool();
        }
        else if (str == "void")
        {
            return Type::Void();
        }
        else
        {
            return Type::Null();
        }
    }

    static Type Integer()
    {
        return Type(int_);
    }
    static Type Float()
    {
        return Type(float_);
    }
    static Type Char()
    {
        return Type(char_);
    }
    static Type Bool()
    {
        return Type(bool_);
    }
    static Type String()
    {
        return Type(str_);
    }
    static Type Null()
    {
        return Type(null_);
    }
    static Type Void()
    {
        return Type(void_);
    }
    static Type Array(Type t, int size_)
    {
        return Type(array_, t, size_);
    }
    static Type Pointer(Type t)
    {
        return Type(ptr_, t);
    }

    Type() : raw(null_), element(nullptr), size(-1) {};

    Type(raw k) : raw(k), element(nullptr), size(0) {}

    Type(raw k, Type elem)
        : raw(k), element(std::make_shared<Type>(elem)), size(0) {}

        Type(raw k, Type elem, int size)
        : raw(k), element(std::make_shared<Type>(elem)), size(size) {}

    bool operator==(const Type &type)
    {
        bool result = type.raw == this->raw;
        if (type.element != nullptr && this->element != nullptr)
        {
            result &= (*type.element.get() == *this->element.get());
        }
        return result;
    }

    Type e()
    {
        if (this->element == nullptr)
        {
            return Type::Null();
        }
        return *this->element.get();
    }

    std::string to_string() const
    {
        switch (raw)
        {
        case raw::array_:
            return this->element == nullptr ? throw std::runtime_error("Instance of Type Array don't have element") : this->element.get()->to_string() + "[" +std::to_string(size)+ "]";
        case raw::ptr_:
            return this->element == nullptr ? throw std::runtime_error("Instance of Type Pointer don't have element") : this->element.get()->to_string() + "*";
        case raw::int_:
            return "int";
        case raw::float_:
            return "float";
        case raw::bool_:
            return "bool";
        case raw::str_:
            return "string";
        case raw::void_:
            return "void";
        case raw::char_:
            return "char";
        case raw::null_:
            return "null";
        default:
            return "error";
        }
    }

private:
    raw raw;
    int size;
    std::shared_ptr<Type> element;
};

class Operator
{
public:
    enum raw
    {
        // Arithmetic
        Add_,
        Sub_,
        Mul_,
        Div_,
        Mod_,
        Minus_,

        // Logic
        And_,
        Or_,
        Xor_,
        Not_,

        // Comparison
        Eq_,
        Neq_,
        Le_,
        Lt_,
        Ge_,
        Gt_,

        // pointer
        Dereference_,
        Reference_,

        // None
        None_
    };

    // Arithmetic
    static Operator Add() { return Operator(Add_); }
    static Operator Sub() { return Operator(Sub_); }
    static Operator Mul() { return Operator(Mul_); }
    static Operator Div() { return Operator(Div_); }
    static Operator Mod() { return Operator(Mod_); }
    static Operator Minus() { return Operator(Minus_); }

    // Logic
    static Operator And() { return Operator(And_); }
    static Operator Or() { return Operator(Or_); }
    static Operator Xor() { return Operator(Xor_); }
    static Operator Not() { return Operator(Not_); }

    // Comparison
    static Operator Eq() { return Operator(Eq_); }
    static Operator Neq() { return Operator(Neq_); }
    static Operator Le() { return Operator(Le_); }
    static Operator Lt() { return Operator(Lt_); }
    static Operator Ge() { return Operator(Ge_); }
    static Operator Gt() { return Operator(Gt_); }

    // Pointer
    static Operator Dereference() { return Operator(Dereference_); }
    static Operator Reference() { return Operator(Reference_); }

    // None
    static Operator None() { return Operator(None_); }

    Operator() : raw(None_) {};

    Operator(raw k) : raw(k) {}

    bool operator==(const Operator &type)
    {
        return type.raw == this->raw;
    }

    std::string to_string() const
    {
        switch (raw)
        {
        case raw::Add_:
            return "Add";
        case raw::Sub_:
            return "Sub";
        case raw::Div_:
            return "Div";
        case raw::Mul_:
            return "Mul";
        case raw::Mod_:
            return "Mod";
        case raw::Minus_:
            return "Minus";

        case raw::And_:
            return "And";
        case raw::Or_:
            return "Or";
        case raw::Xor_:
            return "Xor";
        case raw::Not_:
            return "Not";

        case raw::Eq_:
            return "Eq";
        case raw::Neq_:
            return "Neq";
        case raw::Ge_:
            return "Ge";
        case raw::Gt_:
            return "Gt";
        case raw::Le_:
            return "Le";
        case raw::Lt_:
            return "Lt";

        case raw::Reference_:
            return "Reference";
        case raw::Dereference_:
            return "Dereference";
        case raw::None_:
        default:
            return "None";
        }
    }

    void pretty_print() const
    {
        std::string content;
        switch (raw)
        {
        case Operator::Add_:
            content = "+";
            break;
        case Operator::Sub_:
            content = "-";
            break;
        case Operator::Mul_:
            content = "*";
            break;
        case Operator::Div_:
            content = "/";
            break;
        case Operator::Mod_:
            content = "%";
            break;
        case Operator::Minus_:
            content = "-";
            break;
        case Operator::And_:
            content = "&&";
            break;
        case Operator::Or_:
            content = "||";
            break;
        case Operator::Xor_:
            content = "<>";
            break;
        case Operator::Not_:
            content = "!";
            break;
        case Operator::Eq_:
            content = "==";
            break;
        case Operator::Neq_:
            content = "!=";
            break;
        case Operator::Lt_:
            content = "<";
            break;
        case Operator::Le_:
            content = "<=";
            break;
        case Operator::Gt_:
            content = ">";
            break;
        case Operator::Ge_:
            content = ">=";
            break;
        case Operator::Dereference_:
            content = "*";
            break;
        case Operator::Reference_:
            content = "&";
            break;
        case Operator::None_:
        default:
            content = "error operator not defined";
        }
        std::cout << content;
    }

private:
    raw raw;
};

#endif