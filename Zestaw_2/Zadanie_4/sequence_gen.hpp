#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

template <typename T>
class SequenceGen {
private:
    T _start;
    T _step;
public:
    SequenceGen(T start = T(), T step = 1) : _start(start), _step(step) {}

    T operator()() {
        T tmp = _start;
        _start += _step;
        return tmp;
    }
};