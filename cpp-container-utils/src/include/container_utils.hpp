#ifndef CONTAINER_UTILS_HPP
#define CONTAINER_UTILS_HPP

#include <vector>
#include <set>
#include <stdexcept>


class ContainerUtils {
public:

    static std::vector<unsigned long long> generateFactorials(size_t n);


    template <typename T>
    static std::vector<T> removeDuplicates(const std::vector<T>& input) {
        std::vector<T> result;
        std::set<T> seen;

        for (typename std::vector<T>::const_iterator it = input.begin();
            it != input.end(); ++it) {
            if (seen.insert(*it).second) {
                result.push_back(*it);
            }
        }

        return result;
    }
};

#endif // CONTAINER_UTILS_HPP