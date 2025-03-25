#include <gtest/gtest.h>
#include "container_utils.hpp"
#include <vector>
#include <stdexcept>

TEST(FactorialTest, BasicGeneration) {
    std::vector<unsigned long long> facts = ContainerUtils::generateFactorials(5);

    ASSERT_EQ(facts.size(), 5);
    EXPECT_EQ(facts[0], 1);   
    EXPECT_EQ(facts[1], 1);   
    EXPECT_EQ(facts[2], 2);   
    EXPECT_EQ(facts[3], 6);   
    EXPECT_EQ(facts[4], 24);  
}

TEST(FactorialTest, OverflowCheck) {
    EXPECT_THROW(
        ContainerUtils::generateFactorials(21),
        std::range_error
    );
}