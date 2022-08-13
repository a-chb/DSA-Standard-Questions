Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.

Example 1:
Input: n = 3
Output: 5
    
Example 2:
Input: n = 1
Output: 1


||==============================>Solution<==============================||

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Binary Search Trees.
Memory Usage: 5.9 MB, less than 65.59% of C++ online submissions for Unique Binary Search Trees.

Approch: 01 Brutforce

class Solution {
public:
    int numTrees(int n) {
        long ans = 1;
        for(int i = 0; i < n; i++) 
            ans *= (4*i+2) / (i+2.);
        return ans;
    }
};

Approch:02 Using Calatan Numbers TC -> O(N)

class Solution {
public:
    int numTrees(int n) {
        if(n <= 1) return 1;
        int ans = 0;
        for(int i = 1; i <= n; i++) 
            ans += numTrees(i-1) * numTrees(n-i);
        return ans;
    }
};

Approch: 03 Dynamic Programming TC -> O(N^2)

class Solution {
public:
    int dp[20]{};
    int numTrees(int n) {
        if(n <= 1) return 1;
        if(dp[n]) return dp[n];
        for(int i = 1; i <= n; i++) 
            dp[n] += numTrees(i-1) * numTrees(n-i);
        return dp[n];
    }
};
