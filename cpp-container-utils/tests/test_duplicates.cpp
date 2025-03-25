#include <gtest/gtest.h>
#include "container_utils.hpp"
#include <vector>

TEST(DuplicatesTest, BasicRemoval) {
    std::vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(2);
    input.push_back(3);
    input.push_back(1);

    std::vector<int> unique = ContainerUtils::removeDuplicates(input);

    ASSERT_EQ(unique.size(), 3);
    EXPECT_EQ(unique[0], 1);
    EXPECT_EQ(unique[1], 2);
    EXPECT_EQ(unique[2], 3);
}

TEST(DuplicatesTest, EmptyVector) {
    std::vector<int> input;
    std::vector<int> unique = ContainerUtils::removeDuplicates(input);

    EXPECT_TRUE(unique.empty());
}

TEST(DuplicatesTest, NoDuplicates) {
    std::vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);

    std::vector<int> unique = ContainerUtils::removeDuplicates(input);

    ASSERT_EQ(unique.size(), 3);
    EXPECT_EQ(unique[0], 1);
    EXPECT_EQ(unique[1], 2);
    EXPECT_EQ(unique[2], 3);
}

TEST(DuplicatesTest, AllDuplicates) {
    std::vector<int> input;
    input.push_back(1);
    input.push_back(1);
    input.push_back(1);

    std::vector<int> unique = ContainerUtils::removeDuplicates(input);

    ASSERT_EQ(unique.size(), 1);
    EXPECT_EQ(unique[0], 1);
}

TEST(DuplicatesTest, StringDuplicates) {
    std::vector<std::string> input;
    input.push_back("hello");
    input.push_back("world");
    input.push_back("hello");
    input.push_back("test");

    std::vector<std::string> unique = ContainerUtils::removeDuplicates(input);

    ASSERT_EQ(unique.size(), 3);
    EXPECT_EQ(unique[0], "hello");
    EXPECT_EQ(unique[1], "world");
    EXPECT_EQ(unique[2], "test");
}