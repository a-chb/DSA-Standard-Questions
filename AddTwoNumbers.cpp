You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:
Input: l1 = [0], l2 = [0]
Output: [0]

Example 3:
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

||====================================>Solution<====================================||
  
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    ListNode* sum = new ListNode();
        ListNode* res = new ListNode(0);
    ListNode* rtn = res;
	
    int val = 0;
    while ((l1 != nullptr) || (l2 != nullptr))
    {

        if(l1 != nullptr)
        {
            val += l1->val;
            l1 = l1->next;
        }

        if (l2 != nullptr)
        {
            val += l2->val;
            l2 = l2->next;
        }

        if(val > 9)
            res->next = new ListNode(val %10);
        else
            res->next = new ListNode(val);

        res = res->next;

        val /= 10;
    }

    if(val > 0)
        res->next = new ListNode(val);

    return rtn->next;
    }
};
