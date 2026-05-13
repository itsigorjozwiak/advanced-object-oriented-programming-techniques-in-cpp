#pragma once
#include <cmath>

template<typename Arg>
class SinExpr{ 
    Arg _arg;
public:
    SinExpr(const Arg& arg) :_arg(arg) {};
    double operator()(double x) {
        return std::sin(_arg(x));
    }
};

template<typename Arg>
SinExpr<Arg> sin(const Arg&a){
    return SinExpr<Arg>(a);
}