/*
# Problem          : 1561. Maximum Number of Coins You Can Get
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

/* ------------------------------------------ C++ ------------------------------------------ */
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int maxCoin = 0;
        sort(piles.begin(), piles.end()); // O(n log n)
        int n = (int)piles.size(), i = n - 2;

        for (int i = n - 2; i >= n / 3; i -= 2) {
            maxCoin += piles[i];
        }
        return maxCoin;
    }
};