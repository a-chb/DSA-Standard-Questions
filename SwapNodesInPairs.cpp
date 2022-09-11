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
