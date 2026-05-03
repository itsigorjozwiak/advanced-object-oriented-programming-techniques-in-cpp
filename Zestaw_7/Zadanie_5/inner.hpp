#pragma once
#include <cstddef>

template<size_t N>
inline double inner(double *x, double *y){
    return x[N - 1] * y[N - 1] + inner<N - 1>(x, y);
}

template<>
inline double inner<0>(double *x, double *y){
    return 0.0;
}