#include "arithmeticAverage.hpp"
#include <cmath>
#include <numeric>
#include <stdexcept>

double ArithmeticAverage(const std::vector<int>& first,
                         const std::vector<int>& second) {
    double sum{0};
    for (auto x : first)
        sum += x;
    for (auto x : second)
        sum += x;

    return sum / (first.size() + second.size());
}

double Distance(const std::vector<int>& first, const std::vector<int>& second) {
    if (first.size() != second.size()) {
        throw std::range_error(
            "The distance can be calculated for vectors of the same size only");
    }

    return std::sqrt(std::transform_reduce(
        first.begin(), first.end(), second.begin(), 0., std::plus<>(),
        [](auto a, auto b) { return pow(b - a, 2); }));
}
