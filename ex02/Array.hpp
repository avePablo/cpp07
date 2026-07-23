#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>
#include <cstdlib>  // rand, srand (used as-is by main.cpp)
#include <ctime>    // time             (used as-is by main.cpp)

template <typename T>
class Array {
public:
    Array();
    explicit Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();

    T&          operator[](int index);
    const T&    operator[](int index) const;

    unsigned int size() const;

private:
    T*              _data;
    unsigned int    _size;
};

#include "Array.tpp"

#endif