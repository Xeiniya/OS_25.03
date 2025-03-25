#include "list_utils.hpp"

ListNode* ListUtils::reverseListRecursive(ListNode* head) {
    if (head == 0 || head->next == 0) {
        return head;
    }

    ListNode* newHead = reverseListRecursive(head->next);

    head->next->next = head;
    head->next = 0;

    return newHead;
}

void ListUtils::freeList(ListNode* head) {
    while (head != 0) {
        ListNode* next = head->next;
        delete head;
        head = next;
    }
}