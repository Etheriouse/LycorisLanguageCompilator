#include "../asd/program.h"

std::string to_string_op(Operator op)
{
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
    case Operator::Dereference:
        return "*";
    case Operator::Reference:
        return "&";
    }
    return "error operator not defined";
}

std::string TypeToString(Type t)
{
    if (!(t.e() == Type::Null()))
    {
        if (t == Type::Array(t.e()))
        {
            return TypeToString(t.e()) + "[]";
        } else if(t == Type::Pointer(t.e())) {
            return TypeToString(t.e()) + "*";
        } else {
            return "Error";
        }
    }
    if (t == Type::Integer())
    {
        return "int";
    }
    else if (t == Type::Bool())
    {
        return "bool";
    }
    else if (t == Type::String())
    {
        return "string";
    }
    else if (t == Type::Float())
    {
        return "float";
    }
    else if (t == Type::Null())
    {
        return "null";
    }
    else
    {
        return "Error";
    }
}

std::vector<std::string> split(const std::string &str, char delimiter)
{
    std::vector<std::string> tokens;
    size_t start = 0;
    size_t end = str.find(delimiter);

    while (end != std::string::npos)
    {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(delimiter, start);
    }

    tokens.push_back(str.substr(start));
    return tokens;
}
