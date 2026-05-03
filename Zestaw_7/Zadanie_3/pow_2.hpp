#pragma once

template<int N>
inline double pow_2(double x){
    double half = pow_2<N / 2>(x);
    return (N % 2 == 0) ? (half * half) : (x * half * half);
}

template<>
inline double pow_2<0>(double x){
    return 1.0;
}