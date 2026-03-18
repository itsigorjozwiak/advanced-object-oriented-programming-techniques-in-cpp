#pragma once
#include <iostream>

class Line {
private: 
    int _length;
public:
    Line(int length) : _length(length) {}

    void draw() {
        std::cerr << "Rysuje prosta o dlugosci: " << _length << std::endl;
    }
};