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

  Approch: 2 Optimized O(N) Time && O(1) Space.
    
    Runtime: 451 ms, faster than 25.73% of C++ online submissions for Palindrome Linked List.
    Memory Usage: 118.1 MB, less than 50.21% of C++ online submissions for Palindrome Linked List.
class Solution {
public:
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL && fast ->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode* reverseLL(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true; 
        ListNode* middle = findMiddle(head);
        
        ListNode* temp = middle->next;
        middle->next = reverseLL(temp);
        
        ListNode* check1 = head;
        ListNode* check2 = middle->next;
        
        while(check2 != NULL){
            if(check1->val != check2->val) return false;
            check1 = check1->next;
            check2 = check2->next;
        }
        
        temp = middle->next;
        middle->next = reverseLL(temp);
        
        return true;
    }      
};
