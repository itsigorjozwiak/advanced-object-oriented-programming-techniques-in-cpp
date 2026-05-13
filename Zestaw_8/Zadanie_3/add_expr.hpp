#pragma once
#include "../Zadanie_2/expr_templates.hpp"

template<typename LHS, typename RHS>
class AddExpr{
    LHS _lhs;
    RHS _rhs;
public:
    AddExpr(const LHS &l, const RHS &r) :_lhs(l), _rhs(r) {};
    double operator()(double x){
        return _lhs(x)+_rhs(x);
    }
};

template<typename LHS, typename RHS>  
AddExpr<LHS,RHS>  operator+(const LHS &l, const RHS &r){
    return AddExpr<LHS,RHS>(l,r);
}

template<typename LHS>
AddExpr<LHS, Constant>   operator+(const LHS &l, double r){
    return AddExpr<LHS, Constant>(l, Constant(r));
};

template<typename RHS>
AddExpr<Constant,RHS>   operator+(double l, const RHS &r){
    return AddExpr<Constant, RHS>(Constant(l), r);
}; 