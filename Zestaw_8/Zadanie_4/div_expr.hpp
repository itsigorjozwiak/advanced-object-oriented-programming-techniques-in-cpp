#pragma once
#include <cassert>
#include "../Zadanie_2/expr_templates.hpp"

template<typename LHS, typename RHS>
class DivExpr {
    LHS _lhs;
    RHS _rhs;
public:
    DivExpr(const LHS &l, const RHS &r) : _lhs(l), _rhs(r) {}
    
    double operator()(double x){
        double denominator = _rhs(x);
        assert(denominator != 0.0 && "A division by zero has occurred!!!");
        return _lhs(x) / denominator;
    }
};

template<typename LHS, typename RHS>
DivExpr<LHS, RHS> operator/(const LHS &l, const RHS &r){
    return DivExpr<LHS, RHS>(l, r);
}

template<typename LHS>
DivExpr<LHS, Constant> operator/(const LHS &l, double r){
    return DivExpr<LHS, Constant>(l, Constant(r));
}

template<typename RHS>
DivExpr<Constant, RHS> operator/(double l, const RHS &r){
    return DivExpr<Constant, RHS>(Constant(l), r);
}