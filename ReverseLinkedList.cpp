||========================================>Solution<========================================||

    Runtime: 10 ms, faster than 54.76% of C++ online submissions for Reverse Linked List.
    Memory Usage: 8.2 MB, less than 79.67% of C++ online submissions for Reverse Linked List.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
