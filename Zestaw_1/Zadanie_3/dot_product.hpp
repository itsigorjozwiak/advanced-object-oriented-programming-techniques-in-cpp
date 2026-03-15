#pragma once
#include <cstddef>

template<size_t N,typename T>
T dot_product(T *a, T *b){
        T total=0.0;
        for(size_t i=0; i<N; ++i)
                total += a[i] * b[i];
return total;
}