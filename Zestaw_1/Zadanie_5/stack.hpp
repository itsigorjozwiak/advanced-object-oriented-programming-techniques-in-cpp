#pragma once

template<typename T>
class Stack{
private:	
    T _rep[100];
    size_t _top;
public:
    typedef T value_type;
    Stack() : _top(0) {};

    void push(T val) {_rep[_top++] = val;}
    T pop()          {return _rep[--_top];}
    bool is_empty()    {return (_top == 0);} 
};

template<typename S>
typename S::value_type f(S s){
    typename S::value_type total = 0; 

    while(!s.is_empty()) {
        total += s.pop();
    }

    return total;
}