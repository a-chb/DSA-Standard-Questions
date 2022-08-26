||============================================>Solution<============================================||

  Recursive Approach 
  
    Runtime: 12 ms, faster than 56.87% of C++ online submissions for Merge Two Sorted Lists.
    Memory Usage: 14.9 MB, less than 42.65% of C++ online submissions for Merge Two Sorted Lists.
      
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        
        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next,list2);
            return list1;
        }
        else {
            list2->next = mergeTwoLists(list1,list2->next);
            return list2;
        }
    }
};
