# Problem          : 122. Best Time to Buy and Sell Stock II
# Time Complexity  : O(N)
# C++ Solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = (int)prices.size();
        int prof = 0;

        for (int i = 1; i < n; i++) {
            int dif = (prices[i] - prices[i - 1]);
            prof += max(0, dif);
        }
        return prof;
    }
};