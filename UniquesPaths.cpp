



||==================================================>Solution<==================================================||

Solution using tabulation in optimal Space
TC=O(n) and SC = (n*m)

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Paths.
Memory Usage: 6.5 MB, less than 26.54% of C++ online submissions for Unique Paths.
  
class Solution {
public:
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(m , vector<int>(n , -1));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
         if(i==0 && j==0)  dp[i][j]=1;
         else{
             int up=0,down=0;
             if(i>0)   up   = dp[i-1][j];
             if(j>0)   down = dp[i][j-1];
             dp[i][j] = up+down;
            }
        }
    }
    return dp[m-1][n-1];
    }
};
