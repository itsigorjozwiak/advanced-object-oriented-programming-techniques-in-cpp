#pragma once

template<typename T, typename U>
class Is_convertible {
    typedef char one;
    typedef struct { char c[2]; } two;

    static one test(U);
    static two test(...);
    static T makeT();

public:
    enum {
        yes = (sizeof(test(makeT())) == sizeof(one)),
        same_type = false
    };
};

template<typename T>
class Is_convertible<T, T> {
public:
    enum {
        yes = true,
        same_type = true
    };
};