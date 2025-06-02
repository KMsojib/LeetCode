# Problem          : 135. Candy
# Time Complexity  : O(n)
# Space Complexity : O(n)
# C++ / Python Solution

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = (int)ratings.size();

        vector<int> candies(n, 1);

        // Left to right pass
        for (int i = 1; i < (int)ratings.size(); i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        // right to left pass
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        return accumulate(candies.begin(), candies.end(), 0);
    }
};