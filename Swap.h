#include <iostream>

template <typename T> void swap(T *input1, T *input2) {
    T temp = *input1;
    *input1 = *input2;
    *input2 = temp;
}

template <typename T> inline void printValue(T x, T y) {
    std::cout << "x=" << x << ",y=" << y << std::endl;
}