Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

/*----------------------------------Solution----------------------------------*/

  -> Moore's Voting Algorithm
  
Runtime: 19 ms, faster than 90.99% of C++ online submissions for Majority Element.
Memory Usage: 19.6 MB, less than 12.88% of C++ online submissions for Majority Element.

/*----------------------------------Code Begins----------------------------------*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele = 0;
        for(int i=0;i<nums.size();i++){
            if(count == 0){ ele = nums[i]; }
            if(ele == nums[i]){ count += 1; }
            else {count -= 1;}
        }
        return ele;
        
    }
};

/*----------------------------------Code Ends----------------------------------*/
