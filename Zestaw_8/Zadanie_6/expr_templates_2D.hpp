#pragma once

class First{
public:
    double operator()(double x){
        return x;
    }

    double operator()(double x, double){
        return x;
    }
};

class Second{
public:
    double operator()(double, double y){
        return y;
    }
};

class Constant2D{
    double _c;
public:
    Constant2D(double c) : _c(c) {}
    double operator()(double) {
        return _c;
    }
    double operator()(double, double) {
        return _c;
    }
};

template<typename LHS, typename RHS>
class AddExpr2D{
    LHS _lhs;
    RHS _rhs;
public:
    AddExpr2D(const LHS &l, const RHS &r) : _lhs(l), _rhs(r) {}
    double operator()(double x) {
        return _lhs(x) + _rhs(x);
    }

    double operator()(double x, double y) {
        return _lhs(x, y) + _rhs(x, y);
    }
};

inline AddExpr2D<First, Second> operator+(const First &l, const Second &r){
    return AddExpr2D<First, Second>(l, r);
}

template<typename F>
double integrate2D(F f, double min_x, double max_x, double ds_x, double min_y, double max_y, double ds_y){
    double integral = 0.0;
    for(double x = min_x; x < max_x; x += ds_x) {
        for(double y = min_y; y < max_y; y += ds_y) {
            integral += f(x, y);
        }
    }
    return integral * ds_x * ds_y;
}