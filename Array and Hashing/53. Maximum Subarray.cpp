/*
# Problem          : 53. Maximum Subarray
# Time Complexity  : O(N)
# C++ Solution
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int curSum = 0;

        for (int n : nums) {
            curSum = max(curSum, 0);
            curSum += n;
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};