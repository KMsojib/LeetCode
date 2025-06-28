/*
# Problem          : 2099. Find Subsequence of Length K With the Largest Sum
# Time Complexity  : O(n)
# space Complexity : O(k)
# C++ Solution
*/

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> vp;

        for (int i = 0; i < (int)nums.size(); i++) {
            vp.emplace_back(i, nums[i]);
        }

        sort(vp.begin(), vp.end(),
             [&](auto x1, auto x2) { return x1.second > x2.second; });

        sort(vp.begin(), vp.begin() + k);
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(vp[i].second);
        }
        return res;
    }
};