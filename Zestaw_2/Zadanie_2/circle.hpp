#pragma once
#include <iostream>
#include "shape.hpp"

class Circle: public Shape {
protected: 
    long int _r;
public:
    Circle(long int x, long int y, long int r) : Shape(x,y), _r(r) {}

    virtual void draw() override {
        std::cerr << "Circle : " << _x << " " << _y << " : " << _r << std::endl;
    }

    long int get_r() const {return _r;};
};