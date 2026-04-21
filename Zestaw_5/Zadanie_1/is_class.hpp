#pragma once

template<typename T>
class is_class{
    typedef char one;
    typedef struct { char c[2]; } two;

    template<typename U>
    static one test(int U::*);

    template<typename U>
    static two test(...);

public:
    enum { yes = (sizeof(test<T>(0)) == sizeof(one)) };
};