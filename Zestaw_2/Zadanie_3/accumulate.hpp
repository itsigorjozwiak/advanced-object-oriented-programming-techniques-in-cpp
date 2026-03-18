#pragma once

template <typename InputIterator, typename T>
T accumulate(InputIterator first, InputIterator last, T init) {
    T total = init;
    for( ; first != last; ++first) {
        total += *first;
    }
    return total;
}