/*
# Problem          : 2016. Maximum Difference Between Increasing Elements
# Time Complexity  : O(n^2)
# space Complexity : O(1)
# C++ Solution
*/
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = (int)nums.size();
        int res = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] < nums[j]) {
                    res = max(res, nums[j] - nums[i]);
                }
            }
        }
        return res;
    }
};