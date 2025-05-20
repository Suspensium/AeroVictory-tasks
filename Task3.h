#pragma once

#include <numeric>
#include <vector>

// 3. Add an optional parameter to start aggregating with
// aggregate(xs, mul, 10); // 240
// aggregate(xs, concat, std::string("0")); // "01234"

namespace Task3 {
    enum operation { add, mul, concat };

    template<typename T, typename V>
    V aggregate(const std::vector<T> &vector, operation op, V init) {
        switch (op) {
            case add:
                return std::accumulate(vector.begin(), vector.end(), init, std::plus<V>());
            case mul:
                return std::accumulate(vector.begin(), vector.end(), init, std::multiplies<V>());
            default:
                return init;
        }
    }

    template<typename T>
    std::string aggregate(const std::vector<T> &vector, operation op, std::string init) {
        for (const T &elem: vector) {
            init += std::to_string(elem);
        }
        return init;
    }
}
