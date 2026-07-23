#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void printElem(T const& elem) {
    std::cout << elem << " ";
}

template <typename T>
void increment(T& elem) {
    elem += 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original int array: ";
    iter(arr, len, printElem<int>);
    std::cout << std::endl;

    // function that modifies each element (non-const reference)
    iter(arr, len, increment<int>);
    std::cout << "After increment:    ";
    iter(arr, len, printElem<int>);
    std::cout << std::endl;

    // const array -> f is called with a const reference
    const int constArr[] = {10, 20, 30};
    std::size_t constLen = sizeof(constArr) / sizeof(constArr[0]);
    std::cout << "Const int array:    ";
    iter(constArr, constLen, printElem<int>);
    std::cout << std::endl;

    // works with any type, e.g. std::string
    std::string words[] = {"hello", "world", "!"};
    std::cout << "String array:       ";
    iter(words, static_cast<std::size_t>(3), printElem<std::string>);
    std::cout << std::endl;

    return 0;
}