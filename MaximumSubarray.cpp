Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1

  
  
Solution :

Kadane's algorithm in O(N) time.
Runtime: 188 ms, faster than 34.45% of C++ online submissions for Maximum Subarray.
Memory Usage: 67.8 MB, less than 53.44% of C++ online submissions for Maximum Subarray.

```
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        for(int i =0; i<nums.size(); i++){
            sum += nums[i];
            maxSum = max(sum,maxSum);
            if(sum<0){
                sum =0;
            }
        }
        return maxSum;
    }
};

```
