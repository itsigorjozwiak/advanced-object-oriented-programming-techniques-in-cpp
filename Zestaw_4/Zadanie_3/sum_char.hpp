#pragma once

template<typename T>
struct sum_traits3;

template<> 
struct sum_traits3<char> { 
    typedef int sum_type; 
    static sum_type zero() {return 0;}
};

template<>
struct sum_traits3<int> { 
    typedef long int sum_type; 
    static sum_type zero() {return 0;}
};

template<>
struct sum_traits3<float> { 
    typedef double sum_type; 
    static sum_type zero() {return 0.0;}
};

template<>
struct sum_traits3<double> { 
    typedef double sum_type; 
    static sum_type zero() {return 0.0;}
};

struct sum_char {
    typedef char sum_type;
    static sum_type zero() { return '\0'; }
};

template<typename Traits, typename T> 
typename Traits::sum_type sum3(T *beg, T *end) { 
    typedef typename Traits::sum_type sum_type;
        
    sum_type total = Traits::zero(); 
        
    while(beg != end ) { 
        total += *beg; 
        beg++; 
    } 
    return total; 
}

template<typename T> 
typename sum_traits3<T>::sum_type sum3(T *beg, T *end) { 
    return sum3<sum_traits3<T>, T>(beg, end);
}