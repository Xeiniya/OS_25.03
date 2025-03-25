#include "container_utils.hpp"
#include <limits>

std::vector<unsigned long long> ContainerUtils::generateFactorials(size_t n) {
    if (n > 20) {
        throw std::range_error("ѕревышено максимальное число факториалов");
    }

    std::vector<unsigned long long> factorials;
    factorials.reserve(n);

    unsigned long long factorial = 1;
    for (size_t i = 0; i < n; ++i) {
        if (i > 0 && factorial > std::numeric_limits<unsigned long long>::max() / i) {
            throw std::overflow_error("ѕереполнение при вычислении факториала");
        }

        factorial *= (i > 0) ? i : 1;
        factorials.push_back(factorial);
    }

    return factorials;
}