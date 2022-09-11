Given a linked list, swap every two adjacent nodes and return its head.
You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

Example 1:
Input: head = [1,2,3,4]
Output: [2,1,4,3]

Example 2:
Input: head = []
Output: []

Example 3:
Input: head = [1]
Output: [1]

||============================================>Soution<============================================||

    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Swap Nodes in Pairs.
    Memory Usage: 7.6 MB, less than 6.71% of C++ online submissions for Swap Nodes in Pairs.
      
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head != NULL && head->next != NULL){
            swap(head->val,head->next->val);
            swapPairs(head->next->next);
        }
        return head;
    }
};
