Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

/*---------------------------Solution---------------------------*/
target - num[i]
1) Use HashMap to store element and their addresses
2) check target - num[i] is present in the hash map or not.
3) If present print addresses current nums[i] and target - num[i].

  
Solution is in O(N) time and O(1) space. 
 
Runtime: 8 ms, faster than 96.27% of C++ online submissions for Two Sum.
Memory Usage: 10.9 MB, less than 31.98% of C++ online submissions for Two Sum.
  
  
/*---------------------------Code Begins---------------------------*/
  
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> final;
    unordered_map<int, int> hm;
    for(int i=0;i<nums.size();i++){
        if(hm.find(target - nums[i]) != hm.end()){
           final.push_back(hm[target-nums[i]]);
           final.push_back(i);
           return final; 
        }
        hm[nums[i]] = i;
    }
    return final;
    }
};
  
  
/*---------------------------Code Ends---------------------------*/
