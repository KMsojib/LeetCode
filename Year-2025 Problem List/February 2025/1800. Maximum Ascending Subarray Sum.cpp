/*
# Problem          : 1800. Maximum Ascending Subarray Sum
# Time Complexity  : O(N)
# Space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxAscenSum = nums[0], curnSum = nums[0];
        int n = (int)nums.size(), i = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                curnSum += nums[i];
            } else {
                curnSum = nums[i];
            }
            maxAscenSum = max(maxAscenSum, curnSum);
        }
        return maxAscenSum;
    }
};
