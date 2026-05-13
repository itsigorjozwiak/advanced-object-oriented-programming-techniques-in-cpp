#pragma once
#include <cmath>

template<typename  F>
double integrate(F f, double  min, double max, double ds){
    double integral=0.0;
    for(double x=min; x<max; x+=ds){
        integral += f(x);
    }
    return integral*ds;
}

class sina{
    double _a;
public:
    sina(double a): _a(a) {};
    double operator()(double x){
        return sin(_a*x);
    }
};