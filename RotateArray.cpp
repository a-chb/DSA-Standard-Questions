
/*---------------------------------Solution---------------------------------*/

O ms Solution 

Runtime: 50 ms, faster than 41.61% of C++ online submissions for Rotate Array.
Memory Usage: 25.6 MB, less than 25.29% of C++ online submissions for Rotate Array.
  


/*---------------------------------Code Begins---------------------------------*/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int> temp(nums.size()); 
      for(int i=0;i<nums.size();i++){
          temp[(i+k)%nums.size()]=nums[i];
      } 
        nums = temp;
    }
};


/*---------------------------------Code Ends---------------------------------*/
