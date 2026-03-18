#pragma once
#include <cstddef>

template<typename T> 
void draw_template(T table[], size_t n) {
    for(size_t i = 0; i < n; ++i) {
        table[i].draw(); 
    }
}

template<typename T> 
void draw_template(T *table[], size_t n) {
    for(size_t i = 0; i < n; ++i) {
        table[i] -> draw();
    }
}