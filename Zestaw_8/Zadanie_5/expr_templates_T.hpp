#pragma once

template<typename T>
class VariableT {
public:
    T operator()(T x){
        return x;
    }
};

template<typename T>
class ConstantT {
    T _c;
public:
    ConstantT(T c) : _c(c) {}
    T operator()(T x){
        return _c;
    }
};

template<typename T, typename LHS, typename RHS>
class AddExprT {
    LHS _lhs;
    RHS _rhs;
public:
    AddExprT(const LHS &l, const RHS &r) : _lhs(l), _rhs(r) {}
    T operator()(T x){
        return _lhs(x) + _rhs(x);
    }
}; 

template<typename T, typename R = VariableT<T> >
class Expr{
    R _rep;
public:
    Expr() {}
    Expr(R rep) : _rep(rep) {}
    
    T operator()(T x){
        return _rep(x);
    }

    R rep() const {
        return _rep;
    }
};

template<typename T, typename LHS, typename RHS>
Expr<T, AddExprT<T, LHS, RHS> > operator+(const Expr<T, LHS> &l, const Expr<T, RHS> &r){
    return Expr<T, AddExprT<T, LHS, RHS> >(AddExprT<T, LHS, RHS>(l.rep(), r.rep()));
}

template<typename T, typename LHS>
Expr<T, AddExprT<T, LHS, ConstantT<T> > > operator+(const Expr<T, LHS> &l, T r){
    return Expr<T, AddExprT<T, LHS, ConstantT<T> > >(AddExprT<T, LHS, ConstantT<T> >(l.rep(), ConstantT<T>(r)));
}