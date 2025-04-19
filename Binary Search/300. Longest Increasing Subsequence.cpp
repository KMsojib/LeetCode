# Problem          : 300. Longest Increasing Subsequence
# Time Complexity  : O(nlogn)
# C++ / Python Solution

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> sub;
        for (auto x : nums) {
            if (sub.empty() || sub[sub.size() - 1] < x) {
                sub.push_back(x);
            } else {
                auto it = lower_bound(sub.begin(), sub.end(), x);
                *it = x;
            }
        }
        return sub.size();
    }
};