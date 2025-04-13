# Problem          : Sliding Window: Best Time to Buy and Sell Stock - Leetcode 121
# Time Complexity  : O(N)
# Space Complexity : O(1)
# C++ / Python Solution

============================================ Python ============================================
class Solution:
    def maxProfit(self, prices:List[int]) -> int:
        n = len(prices)
        l,r = 0,1
        maxProfit = 0
        
        while r <  n:
            # Is profitable?
            if prices[r] > prices[l]:
                maxProfit = max(maxProfit,prices[r] - prices[l])
            # if p[r] < p[l]
            else:
                l = r
            r += 1
        return maxProfit


============================================ C++ ============================================

class Solution{
    int maxProfit(vector<int>&prices){
        int n = (int)prices.size();
        int buy = 0, sell = 1, maxProfit = 0;
        
        while(sell < n){
            // If profitable sell it
            if(price[buy] < price[sell]){
                maxProfit = max(maxProfit, price[sell] - price[buy]);
            }
            else{
                buy = sell;
            }
            sell += 1;
        }
    }
    
    return maxProfit;
};