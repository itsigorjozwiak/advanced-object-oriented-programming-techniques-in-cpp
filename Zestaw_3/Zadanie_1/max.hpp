#pragma once
#include <cstddef>
#include <cstring>

template <typename T>
T max(T a, T b){
    return (a > b) ? a : b;
}

template <typename T>
T* max(T *a, T *b){
    return ((*a) > (*b)) ? a : b;
}

template <typename T>
T max(T *data, size_t n){
    T _max = data[0];
    for(size_t i=1; i<n; ++i)
        if(data[i] > _max) _max = data[i];
    return _max;
}

template<>
inline char* max<char *>(char *a, char *b){
    return (strcmp(a, b) > 0) ? a : b;
}

template<>
inline const char* max<const char *>(const char *a, const char *b){
    return (strcmp(a, b) > 0) ? a : b;
}

template<typename T>
const T* max(T *a, const T*b) {
    return (*a) > (*b) ? a : b;
}

template<>
inline const char* max<char>(char *a, const char *b){
    return (strcmp(a, b) > 0) ? a : b;
}