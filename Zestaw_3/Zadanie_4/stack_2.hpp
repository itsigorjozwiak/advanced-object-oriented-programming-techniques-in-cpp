#pragma once
#include <vector>

template<typename T, int N = 100, typename R = T*>
class Stack_2;

template<typename T,int N>
class Stack_2<T, N, T*>{
    T _rep[N];
    unsigned int _top;
public:
    Stack_2() : _top(0) {};

    void push(T e) {
        _rep[_top++] = e;
    }

    T pop() {
        return _rep[--_top];
    }

    bool is_empty() const {
        return _top == 0;
    }
};

template<typename T, int N, template<typename E> class Sequence> 
class Stack_2< T, N, Sequence<T> >{
    Sequence<T> _rep;
public:
    void push(T e) {
        _rep.push_back(e);
    }

    T pop() {
        T top = _rep.back();
        _rep.pop_back();
        return top;
    }

    bool is_empty() const {
        return _rep.empty();
    }
};