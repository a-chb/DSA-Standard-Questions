You are given two non-empty linked lists representing two non-negative integers. 
The most significant digit comes first and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
  
Example 1:
Input: l1 = [7,2,4,3], l2 = [5,6,4]
Output: [7,8,0,7]

Example 2:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [8,0,7]

Example 3:
Input: l1 = [0], l2 = [0]
Output: [0]

||==========================================>Solution<==========================================||
  
  Runtime: 42 ms, faster than 85.27% of C++ online submissions for Add Two Numbers II.
  Memory Usage: 71.3 MB, less than 47.90% of C++ online submissions for Add Two Numbers II.
    
class Solution {
public:
    ListNode* reverseLL(ListNode* head){
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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1= reverseLL(l1);
        l2 = reverseLL(l2);
        
        ListNode *temp=new ListNode();
        ListNode *newhead=temp;
        int carry=0;
        while(l1 or l2 or carry)
        {
            int sum=0;
            if(l1)
            {
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum=sum+l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
        }
        newhead=reverseLL(newhead->next);
        return newhead;
        
    }
};
