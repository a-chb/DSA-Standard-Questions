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
