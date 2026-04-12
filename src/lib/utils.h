#ifndef utils_h
#define utils_h

#include "../asd/program.h"

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

enum class Type
{
    Integer,
    String,
    Float,
    Bool,
    Null
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