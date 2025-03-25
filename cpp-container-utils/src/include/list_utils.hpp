#ifndef LIST_UTILS_HPP
#define LIST_UTILS_HPP

struct ListNode {
    int val;
    ListNode* next;
    explicit ListNode(int x) : val(x), next(0) {}
};


class ListUtils {
public:

    static ListNode* reverseListRecursive(ListNode* head);

    static void freeList(ListNode* head);
};

#endif // LIST_UTILS_HPP