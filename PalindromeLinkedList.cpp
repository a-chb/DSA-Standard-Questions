||========================================>Solution<========================================||
  
  Approch: 1 Brutforce O(N) Time && O(N) Space.
    
    Runtime: 347 ms, faster than 58.32% of C++ online submissions for Palindrome Linked List.
    Memory Usage: 128.2 MB, less than 14.42% of C++ online submissions for Palindrome Linked List.
      
 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode *temp =head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        if(v.size()==1) return true;
        int i=0; int j = v.size()-1;
        while(i<=j){
            if(v[i]!=v[j]) { return 0;}
                i++;
                j--;
        }
        return 1;
    }
};
