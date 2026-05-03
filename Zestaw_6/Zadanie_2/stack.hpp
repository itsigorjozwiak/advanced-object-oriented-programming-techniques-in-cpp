#pragma once

#include "checking_policy.hpp"

template<typename T = int, size_t N = 100, typename Checking_policy = No_checking_policy> 
class Stack {
private:    
    T _rep[N];
    size_t _top;
public:
    Stack() : _top(0) {}

    void push(const T &val) {
        Checking_policy::check_push(_top, N);
        _rep[_top++] = val;
    }

    void pop() {
        Checking_policy::check_pop(_top);
        --_top;
    }

    const T& top() const {
        Checking_policy::check_top(_top);
        return _rep[_top - 1];
    }

    bool is_empty() {
        return !_top;
    }
};