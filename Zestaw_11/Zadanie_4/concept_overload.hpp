#pragma once
#include <iostream>
#include <concepts>

void process_data(auto val) {
    std::cout << "Auto overload called with value: " << val << std::endl;
}

void process_data(std::integral auto val) {
    std::cout << "Integral overload called with value: " << val << std::endl;
}

void process_data(long val) {
    std::cout << "Long overload called with value: " << val << std::endl;
}