Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
  
  
 -> Solved using two pointer approch in O(N) time and O(1) Space.
  
 /*......................Code Begins......................*/
  
  class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice=INT_MAX;
        int maxProfit =0;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minPrice);
        }
        return maxProfit;
    }
};
  
  /*......................Code Ends......................*/
