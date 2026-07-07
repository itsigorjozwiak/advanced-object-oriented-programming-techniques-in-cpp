#pragma once
#include <concepts>

template<std::integral T>
T gcd(T a, T b)
{
    while (b != 0){
        T temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}