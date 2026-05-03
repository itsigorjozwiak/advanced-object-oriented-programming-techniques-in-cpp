#pragma once

#include <iostream>

class Kolor {
    int r_, g_, b_;
public:
    Kolor(int r = 0, int g = 0, int b = 0) : r_(r), g_(g), b_(b) {}

    friend std::ostream& operator<<(std::ostream& os, const Kolor& k) {
        return os << "RGB(" << k.r_ << ", " << k.g_ << ", " << k.b_ << ")";
    }
};