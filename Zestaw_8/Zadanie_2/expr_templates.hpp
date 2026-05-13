#pragma once

class Variable {
public:
    double operator()(double x) {
        return x;
    }
};

class Constant{
    double _c;
public:
    Constant(double c) :_c(c){};
    double operator()(double x){
        return _c;
    }
};