/*
# Problem          : 1200. Minimum Absolute Difference
# Time Complexity  : O(n log n) for sorting
# space Complexity : O(1)
# C++ Solution
*/
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        vector<vector<int>> vp;
        int n = (int)nums.size();
        sort(nums.begin(), nums.end());

        int minDif = abs(nums[0] - nums[1]);
        for (int i = 0; i < n - 1; i++) {
            minDif = min(minDif, abs(nums[i] - nums[i + 1]));
        }

        for (int i = 0; i < n - 1; i++) {
            if (abs(nums[i] - nums[i + 1]) == minDif) {
                vp.push_back({nums[i], nums[i + 1]});
            }
        }
        return vp;
    }
};