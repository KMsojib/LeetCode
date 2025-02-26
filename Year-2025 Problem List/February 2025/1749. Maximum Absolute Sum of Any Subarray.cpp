/*
# Problem          : 1749. Maximum Absolute Sum of Any Subarray
# Time Complexity  : O(n)
# C++ Solution
*/

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0, minSum = 0, crnSum = 0;

        for (auto num : nums) {
            crnSum += num;
            maxSum = max(maxSum, crnSum);
            if (crnSum < 0)
                crnSum = 0;
        }

        crnSum = 0;
        for (auto num : nums) {
            crnSum += num;
            minSum = min(minSum, crnSum);
            if (crnSum > 0)
                crnSum = 0;
        }

        return max(maxSum, -minSum);
    }
};