#pragma once
#include <vector>
#include <concepts>

template<typename T>
class MyVector
{
    std::vector<T> data_;

public:
    void push_back(const T& value)
        requires std::copyable<T>
    {
        data_.push_back(value);
    }

    std::size_t size() const
    {
        return data_.size();
    }
};

class NonCopyable
{
public:
    NonCopyable() = default;

    NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator=(const NonCopyable&) = delete;
};