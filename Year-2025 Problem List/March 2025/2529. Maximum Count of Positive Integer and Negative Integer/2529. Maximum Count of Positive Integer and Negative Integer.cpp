/*
# Problem          : 2529. Maximum Count of Positive Integer and Negative Integer
# Time Complexity  : O(N)
# C++ Solution
*/

// Brute Force
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0, pos = 0;
        for (auto num : nums) {
            if (num > 0) {
                pos += 1;
            }
            if (num < 0) {
                neg += 1;
            }
        }
        return max(pos, neg);
    }
};