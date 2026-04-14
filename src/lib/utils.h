#ifndef utils_h
#define utils_h

#include "../asd/program.h"
#include <memory>

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
    Gt,

    Dereference,
    Reference
};

class Type
{
public:
    enum raw
    {
        int_,
        str_,
        float_,
        bool_,
        array_,
        ptr,
        null_
    };

    static Type Integer()
    {
        return Type(int_);
    }
    static Type Float()
    {
        return Type(float_);
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
    static Type Array(Type t)
    {
        return Type(array_, t);
    }
    static Type Pointer(Type t) {
        return Type(ptr, t);
    }

    Type() : raw(null_), element(nullptr) {};

    Type(raw k) : raw(k), element(nullptr) {}

    Type(raw k, Type elem)
        : raw(k), element(std::make_shared<Type>(elem)) {}

    bool operator==(const Type &type)
    {
        bool result = type.raw == this->raw;
        if(type.element != nullptr && this->element != nullptr) {
            result &= (*type.element.get() == *this->element.get());
        }
        return result;
    }

    Type e() {
        if(this->element == nullptr) {
            return Type::Null();
        }
        return *this->element.get();
    }

private:
    raw raw;
    std::shared_ptr<Type> element;
};

template <typename T>
class Optional
{

public:
    Optional(T *element = nullptr) : element(element) {};
    static Optional of(T *element)
    {
        return Optional(element);
    }

    static Optional empty()
    {
        return Optional(nullptr);
    }

    bool isEmpty() const
    {
        return element == nullptr;
    }

    T *get() const
    {
        if (isEmpty())
            throw std::runtime_error("Optional is empty");
        return element;
    }

private:
    T *element;
};

std::string to_string_op(Operator op);
std::string TypeToString(Type t);
std::vector<std::string> split(const std::string &str, char delimiter);
#endif