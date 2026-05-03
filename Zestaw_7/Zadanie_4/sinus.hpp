#pragma once
#include "../Zadanie_1/silnia.hpp"
#include "../Zadanie_3/pow_2.hpp"

template<int N>
inline double sinus(double x){
    int sign = (N % 2 != 0) ? 1 : -1;
    double numerator = pow_2<2 * N - 1>(x);
    double denominator = silnia<2 * N - 1>();

    return sinus<N - 1>(x) + sign * (numerator / denominator);
}

template<>
inline double sinus<0>(double x){
    return 0.0;
}