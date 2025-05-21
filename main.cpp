#include <array>
#include <iostream>

#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
#include "Task4.h"

int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

template<typename T>
std::string concat(std::string acc, T y) {
    return acc + std::to_string(y);
}

int main() {
    const std::vector<int32_t> vector{1, 2, 3, 4};

    // 1
    std::cout << Task1::vectorSum(vector) << std::endl;

    // 2
    std::cout << Task2::aggregate(vector, [](int32_t x, int32_t y) { return x + y; }) << std::endl;
    std::cout << Task2::aggregate(vector, std::multiplies<int32_t>()) << std::endl;

    // 3
    std::cout << Task3::aggregate(vector, 10, &mul) << std::endl;
    std::cout << Task3::aggregate(vector, std::string("0"), &concat<int32_t>) << std::endl;

    // 4
    std::cout << Task4::aggregate(vector.begin(), vector.end(),
                                  10, std::multiplies<int32_t>()) << std::endl;
    const std::array<int32_t, 4> array{1, 2, 3, 4};
    auto lambda = [&](int32_t x, int32_t y) { return x + y; };
    std::cout << Task4::aggregate(array.begin(), array.end(),
                                  0, lambda) << std::endl;
    std::cout << Task4::aggregate(array.begin(), array.end(),
                                  0, &add) << std::endl;

    return 0;
}
