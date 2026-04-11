#pragma once

template<typename T>
struct sum_traits2;

template<>
struct sum_traits2<char> {
    typedef int sum_type; 
    static sum_type zero() {return 0;}
};

template<>
struct sum_traits2<int> {
    typedef long int sum_type; 
    static sum_type zero() {return 0;}
};

template<>
struct sum_traits2<float> {
    typedef double sum_type; 
    static sum_type zero() {return 0.0;}
};

template<>
struct sum_traits2<double> {
    typedef double sum_type; 
    static sum_type zero() {return 0.0;}
};

template<typename T> 
typename sum_traits2<T>::sum_type sum2(T *beg, T *end) { 
    typedef typename sum_traits2<T>::sum_type sum_type;
    
    sum_type total = sum_traits2<T>::zero();
    
    while(beg != end ) { 
        total += *beg; 
        beg++; 
    }
    
    return total; 
}