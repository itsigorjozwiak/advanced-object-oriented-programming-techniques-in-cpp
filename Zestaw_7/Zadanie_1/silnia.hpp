#pragma once

template<int N>
int silnia(){
    return N * silnia<N - 1>();
}

template<>
int silnia<0>(){
    return 1;
}