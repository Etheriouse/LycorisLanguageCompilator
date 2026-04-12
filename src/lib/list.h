#ifndef list_h
#define list_h

#include <vector>
#include <string>
#include <iostream>

template <typename T>
class List;

template <typename T>
std::ostream& operator<<(std::ostream&, const List<T>&);

template <typename T>
class List
{

public:
    size_t length;
    List(int initsize = 0)
    {
        length = initsize;
    }

    bool append(T element)
    {
        arr.push_back(element);
        length = arr.size();
        return true;
    }

    bool add(u_int64_t index, T element)
    {
        arr.insert(index, element);
        length = arr.size();
        return true;
    }

    bool remove(u_int64_t index)
    {
        arr.erase(arr.begin() + index);
        length = arr.size();
        return true;
    }

    bool remove()
    {
        arr.pop_back();
        return true;
    }

    T pop()
    {
        T element = arr.back();
        arr.pop_back();
        length = arr.size();
        return element;
    }

    T &operator[](u_int64_t i)
    {
        return arr[i];
    }

    const T &operator[](u_int64_t i) const
    {
        return arr[i];
    }

private:
    std::vector<T> arr;

    template <typename U>
    friend std::ostream &operator<<(std::ostream &, const List<U> &);
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const List<T> &l)
{
    os << "[";
    for (size_t i = 0; i < l.length; i++)
    {
        if (i > 0)
        {
            os << ", ";
        }
        os << l[i];
    }
    os << "]";
    return os;
}

#endif