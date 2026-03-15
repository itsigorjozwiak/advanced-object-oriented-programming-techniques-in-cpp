#pragma once
#include <iostream>

template< template<int N> class  C,int K>
void f(C<K>){
  std::cout << K << std::endl;
}

template<int N>
struct SomeClass {};