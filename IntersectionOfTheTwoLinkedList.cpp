||========================================>Solution<========================================||
  
  Approach 1 Brutforce solution
      Time Complexity : O(m * n)
      Space Complexity : O(1)
  Runtime: 841 ms, faster than 5.03% of C++ online submissions for Intersection of Two Linked Lists.
  Memory Usage: 14.6 MB, less than 73.59% of C++ online submissions for Intersection of Two Linked Lists.
  
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp;
        while(headA != NULL){
            temp = headB;
            while(temp != NULL){
                if(headA == temp) return headA;
                temp = temp->next;
            }
            headA = headA->next;
        }
        return NULL;
    }
};

  Approach 2 Optimized solution using Two Pointer
      Time Complexity : O(m + n)
      Space Complexity : O(1)
  
  Runtime: 73 ms, faster than 54.85% of C++ online submissions for Intersection of Two Linked Lists.
  Memory Usage: 14.7 MB, less than 32.88% of C++ online submissions for Intersection of Two Linked Lists.
    
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* check1 = headA;
        ListNode* check2 = headB;
        while(check1 != check2){
            if(check1 == NULL) check1 = headB;
            else check1 = check1->next;
            
            if(check2 == NULL) check2 = headA;
            else check2 = check2->next;
            
        }
        
        return check1;
        
    }
