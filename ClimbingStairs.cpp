You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step


||==============================>Solution<==============================||

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
Memory Usage: 6.2 MB, less than 31.34% of C++ online submissions for Climbing Stairs.
  
class Solution {
public:
    int climbStairs(int n) {
        if ( n == 0 ) return 0;
        else if ( n == 1 ) return 1;
        else if ( n == 2 ) return 2;
        
        vector<int> ways(n+1, 0);
        ways[1] = 1; ways[2] = 2;
        for ( int i = 3; i <= n; i++ ) {
            ways[i] = ways[i-1] + ways[i-2];
        }
        
        return ways[n];
    }
};
