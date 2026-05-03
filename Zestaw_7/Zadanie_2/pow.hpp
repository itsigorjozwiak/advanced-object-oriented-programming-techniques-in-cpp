#pragma once

template<int N, int M>
struct Pow{
    enum { val = N * Pow<N,M-1>::val };
};

template<int N>
struct Pow<N,0>{
    enum { val = 1 };
};