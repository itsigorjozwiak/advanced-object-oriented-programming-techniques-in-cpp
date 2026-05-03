#pragma once
#include <cstddef>

template<size_t N, typename T>
struct InnerDot{
    static inline T scalar(T *x, T *y){
        return x[N - 1] * y[N - 1] + InnerDot<N - 1, T>::scalar(x, y);
    }
};

template<typename T>
struct InnerDot<0, T>{
    static inline T scalar(T *x, T *y){
        return T(0);
    }
};

template<size_t N, typename T>
inline T dot(T *x, T *y){
    return InnerDot<N, T>::scalar(x, y);
}