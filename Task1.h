#pragma once

#include <numeric>
#include <vector>

// 1. In C++11 write a function summing all vector elements:
// std::vector xs = { 1, 2, 3, 4 };
// vectorSum(xs); // 10

namespace Task1 {
    int32_t vectorSum(const std::vector<int32_t>& vector)
    {
        return std::accumulate(vector.begin(), vector.end(), 0);
    }
}