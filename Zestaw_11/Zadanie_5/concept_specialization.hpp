#pragma once
#include <iostream>
#include <concepts>

template <std::integral T>
void analyze_type(T val){
    std::cout << "Generic template for std::integral called with: " << val << std::endl;
}

template <>
void analyze_type<int>(int val){
    std::cout << "Explicit specialization for 'int' called with: " << val << std::endl;
}