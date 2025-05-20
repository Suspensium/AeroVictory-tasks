#pragma once

#include <numeric>

// 4. Implement `aggregate` recursively
// Let's also make it work with plain arrays (and maybe other collections?)
// And with both function pointers and lambdas (and maybe something else?)

namespace Task4 {
    template<typename It, typename T, typename Func>
    T aggregate(It first, It last, T init, Func f) {
        if (first == last) return init;
        return aggregate(std::next(first), last, f(init, *first), f);
    }


}
