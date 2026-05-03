#pragma once

#include <iostream>
#include <cstdlib>

struct No_checking_policy {
    static void check_push(size_t, size_t) {}
    static void check_pop(size_t) {}
    static void check_top(size_t) {}
};

class Abort_on_error_policy {
public:
    static void check_push(size_t top, size_t size) {
        if(top >= size) {
            std::cerr << "trying to push elemnt on full stack: aborting" << std::endl;
            std::abort();
        }
    }

    static void check_pop(size_t top) {
        if(top == 0) {
            std::cerr << "trying to pop from empty stack: aborting" << std::endl;
            std::abort();
        }
    }

    static void check_top(size_t top) {
        if(top == 0) {
            std::cerr << "trying to read top from empty stack: aborting" << std::endl;
            std::abort();
        }
    }
};