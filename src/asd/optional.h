#ifndef optional_h
#define optional_h

#include <sstream>

using namespace std;

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

    bool isPresent() const
    {
        return element != nullptr;
    }

    T *get() const
    {
        if (isEmpty())
            throw runtime_error("Optional is empty");
        return element;
    }

private:
    T *element;
};

#endif