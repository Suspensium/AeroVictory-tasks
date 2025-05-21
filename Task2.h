#pragma once

#include <numeric>
#include <vector>

// 2. Let's separate iteration and an operation to be done.
// Write a function aggregating a vector with any given function:
// aggregate(xs, add); // 10
// aggregate(xs, mul); // 24

namespace Task2 {
    enum operation { add, mul };

    template<typename T, typename Func>
    T aggregate(const std::vector<T> &vector, Func f) {
        T sum{vector.at(0)};
        for (size_t i = 1; i < vector.size(); i++) {
            sum = f(sum, vector[i]);
        }

        return sum;
    }
}
