#include "arithmeticAverage.hpp"
#include <stdexcept>
#include <numeric>
#include <cmath>

double ArithmeticAverage(std::vector<double> v1, std::vector<double> v2)
{
    double sum{0};
    for (auto x : v1) sum += x;
    for (auto x : v2) sum += x;

    return sum / (v1.size() + v2.size());
}

double Distance(std::vector<double> point1, std::vector<double> point2)
{
    if (point1.size() != point2.size())
    {
        throw std::range_error("The distance can be calculated for vectors of the same size only");
    }

    return std::sqrt(std::transform_reduce( \
        point1.begin(), point1.end(), point2.begin(), 0., \
        std::plus<>(), [](auto a, auto b){return pow(b - a, 2);}));
}