Given an array of distinct integers nums and a target integer target, return the number of possible combinations that add up to target.
The test cases are generated so that the answer can fit in a 32-bit integer.
  
Example 1:
Input: nums = [1,2,3], target = 4
Output: 7
Explanation:
The possible combination ways are:
(1, 1, 1, 1)
(1, 1, 2)
(1, 2, 1)
(1, 3)
(2, 1, 1)
(2, 2)
(3, 1)
Note that different sequences are counted as different combinations.

||================================================>Soluton<================================================||

O(n*target) since we run two loops.
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Combination Sum IV.
Memory Usage: 6.7 MB, less than 30.10% of C++ online submissions for Combination Sum IV.
 
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> result(target + 1);
        result[0] = 1;
        for (int i = 1; i <= target; ++i) {
            for (int x : nums) {
                if (i >= x) result[i] += result[i - x];
            }
        }
        
        return result[target];
    }
};
