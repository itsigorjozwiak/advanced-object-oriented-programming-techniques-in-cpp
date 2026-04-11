#pragma once
#include <iterator>

template<typename T>
struct sum_traits4;

template<>
struct sum_traits4<char> { 
    typedef int sum_type; 
    static sum_type zero() {return 0;}
};

template<>
struct sum_traits4<int> { 
    typedef long int sum_type; 
    static sum_type zero() {return 0;}
};

template<>
struct sum_traits4<float> { 
    typedef double sum_type; 
    static sum_type zero() {return 0.0;}
};

template<>
struct sum_traits4<double> { 
    typedef double sum_type; 
    static sum_type zero() {return 0.0;}
};

template<typename Iterator> 
typename sum_traits4<typename std::iterator_traits<Iterator>::value_type>::sum_type 
sum4(Iterator beg, Iterator end) { 

    typedef typename std::iterator_traits<Iterator>::value_type value_type;
    
    typedef typename sum_traits4<value_type>::sum_type sum_type;
    
    sum_type total = sum_traits4<value_type>::zero(); 
    
    while(beg != end ) { 
        total += *beg; 
        beg++; 
    } 
    return total; 
}