#pragma once
#include <iostream>

template<typename T, int N = 100>
class Stack {
public:
    Stack() { std::cout << "Base template selected: Stack<T, N>"; }
};

template<typename T>
class Stack<T,666> {
public:
    Stack() { std::cout << "Partial specialization selected: Stack<T, 666>"; }
};

template<typename T,int N>
class Stack<T*,N> {
public:
    Stack() { std::cout << "Partial specialization selected: Stack<T*, N>"; }
};

template<int N>
class Stack<double ,N> {
public:
    Stack() { std::cout << "Partial specialization selected: Stack<double, N>"; }
};

template<int N>
class Stack<int *,N> {
public:
    Stack() { std::cout << "Partial specialization selected: Stack<int*, N>"; }
};

template<>
class Stack<double,666> {
public:
    Stack() { std::cout << "Full specialization selected: Stack<double, 666>"; }
};

template<>
class Stack<double *,44> {
public:
    Stack() { std::cout << "Full specialization selected: Stack<double*, 44>"; }
};