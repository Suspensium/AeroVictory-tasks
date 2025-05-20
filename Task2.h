#pragma once

#include <numeric>
#include <vector>

// 2. Let's separate iteration and an operation to be done.
// Write a function aggregating a vector with any given function:
// aggregate(xs, add); // 10
// aggregate(xs, mul); // 24

namespace Task2 {
    enum operation { add, mul };

    int32_t aggregate(const std::vector<int32_t> &vector, operation op) {
        switch (op) {
            case add:
                return std::accumulate(vector.begin(), vector.end(),
                                       0, std::plus<int32_t>());
            case mul:
                return std::accumulate(vector.begin(), vector.end(),
                                       1, std::multiplies<int32_t>());
            default:
                return 0;
        }
    }
}
