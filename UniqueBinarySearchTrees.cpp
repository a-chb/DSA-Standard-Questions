// class Solution {
// public:
//     int numTrees(int n) {
//         long ans = 1;
//         for(int i = 0; i < n; i++) 
//             ans *= (4*i+2) / (i+2.);
//         return ans;
//     }
// };

// class Solution {
// public:
//     int numTrees(int n) {
//         if(n <= 1) return 1;
//         int ans = 0;
//         for(int i = 1; i <= n; i++) 
//             ans += numTrees(i-1) * numTrees(n-i);
//         return ans;
//     }
// };

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
