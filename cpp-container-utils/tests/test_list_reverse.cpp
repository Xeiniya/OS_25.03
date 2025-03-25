#include <gtest/gtest.h>
#include "list_utils.hpp"

TEST(ListReverseTest, BasicReversal) {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* reversed = ListUtils::reverseListRecursive(head);

    ASSERT_TRUE(reversed != NULL);
    EXPECT_EQ(reversed->val, 5);
    EXPECT_EQ(reversed->next->val, 4);
    EXPECT_EQ(reversed->next->next->val, 3);
    EXPECT_EQ(reversed->next->next->next->val, 2);
    EXPECT_EQ(reversed->next->next->next->next->val, 1);
    EXPECT_TRUE(reversed->next->next->next->next->next == NULL);

    ListUtils::freeList(reversed);
}

TEST(ListReverseTest, SingleElementList) {
    ListNode* head = new ListNode(42);

    ListNode* reversed = ListUtils::reverseListRecursive(head);

    ASSERT_TRUE(reversed != NULL);
    EXPECT_EQ(reversed->val, 42);
    EXPECT_TRUE(reversed->next == NULL);

    ListUtils::freeList(reversed);
}

TEST(ListReverseTest, EmptyList) {
    ListNode* head = NULL;

    ListNode* reversed = ListUtils::reverseListRecursive(head);

    EXPECT_TRUE(reversed == NULL);
}

TEST(ListReverseTest, TwoElementList) {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);

    ListNode* reversed = ListUtils::reverseListRecursive(head);

    ASSERT_TRUE(reversed != NULL);
    EXPECT_EQ(reversed->val, 2);
    EXPECT_EQ(reversed->next->val, 1);
    EXPECT_TRUE(reversed->next->next == NULL);

    ListUtils::freeList(reversed);
}