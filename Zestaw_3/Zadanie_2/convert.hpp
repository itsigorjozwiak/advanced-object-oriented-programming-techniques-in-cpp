#pragma once

template<typename T,typename U>
T convert(U u){
  return static_cast<T>(u);
}

template<>
inline int convert<int, double>(double u){
    return static_cast<int>(u);
}

template<>
inline double convert<double, double>(double u){
    return u;
}