You are given an integer array prices where prices[i] is the price of a given stock on the ith day, and an integer k.
Find the maximum profit you can achieve. You may complete at most k transactions.
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

Example 1:
Input: k = 2, prices = [2,4,1]
Output: 2
Explanation: Buy on day 1 (price = 2) and sell on day 2 (price = 4), profit = 4-2 = 2.

Example 2:
Input: k = 2, prices = [3,2,6,5,0,3]
Output: 7
Explanation: Buy on day 2 (price = 2) and sell on day 3 (price = 6), profit = 6-2 = 4. 
Then buy on day 5 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.

||=============================================>Solution<=============================================||
  
  Runtime: 0 ms, faster than 100.00% of C++ online submissions for Best Time to Buy and Sell Stock IV.
  Memory Usage: 11.2 MB, less than 72.11% of C++ online submissions for Best Time to Buy and Sell Stock IV.
    
class Solution {
public:
    int maxProfit(int k, vector<int>& a) {
        int n=a.size();
        
		// 0 days or 0 transactions
        if(n==0 || k==0)
            return 0;
        
        int i,j,mxp;
        int dp[k+1][n];
        
        for(i=0;i<=k;i++)
        {
            mxp=INT_MIN;
            for(j=0;j<n;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else
                {
		    mxp=max(mxp,dp[i-1][j-1]-a[j-1]);
                    dp[i][j]=max(dp[i][j-1],mxp+a[j]);
                }
            }
        }
        
        return dp[k][n-1];
    }
};
