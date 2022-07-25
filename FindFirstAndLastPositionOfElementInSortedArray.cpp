Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

/*------------------------------------Solution------------------------------------*/
Solution in O(log n);

Runtime: 13 ms, faster than 48.91% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
Memory Usage: 13.6 MB, less than 83.66% of C++ online submissions for Find First and Last Position of Element in Sorted Array.

/*------------------------------------Code Begins------------------------------------*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
       
        auto low = lower_bound(nums.begin(),nums.end(),target);
        auto up = upper_bound(nums.begin(),nums.end(),target);
        
        if(!binary_search(nums.begin(),nums.end(),target))    return {-1,-1};
        
        int first = low - nums.begin();
        int last = up - nums.begin()-1;
        
        return {first ,last};
       
    }
};

/*------------------------------------Code Ends------------------------------------*/
