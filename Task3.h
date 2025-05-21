#pragma once

#include <numeric>
#include <vector>

// 3. Add an optional parameter to start aggregating with
// aggregate(xs, mul, 10); // 240
// aggregate(xs, concat, std::string("0")); // "01234"

namespace Task3 {
    template<typename It, typename T, typename Func>
    T aggregate(It first, It last, T init, Func f) {
        if (first == last) return init;

        while (first != last) {
            init = f(init, *first);
            ++first;
        }

        return init;
    }

    template<typename C, typename T, typename Func>
    T aggregate(const C &container, T init, Func f) {
        for (const auto &elem: container) {
            init = f(init, elem);
        }
        return init;
    }
}
