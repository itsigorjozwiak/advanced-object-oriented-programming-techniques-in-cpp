#pragma once

template<typename T>
class has_value_type{
private:
    typedef char one;
    typedef struct { char c[2]; } two;

    template<typename U>
    static one test(typename U::value_type*);

    template<typename U>
    static two test(...);

public:
    enum { yes = (sizeof(test<T>(0)) == sizeof(one)) };
};