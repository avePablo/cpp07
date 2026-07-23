#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

/*
** Calls the callable "f" on every element of "array", which has
** "length" elements. T is deduced from the pointer passed in, so if
** the caller passes a pointer to const T, "f" will be invoked with a
** const reference; if the pointer is non-const, "f" can freely modify
** each element through a non-const reference.
*/
template <typename T, typename F>
void iter(T* array, std::size_t const length, F f) {
    for (std::size_t i = 0; i < length; ++i)
        f(array[i]);
}

#endif