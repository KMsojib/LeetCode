/*
# Problem          : 3423. Maximum Difference Between Adjacent Elements in a Circular Array
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        nums.push_back(nums[0]);
        int n = (int)nums.size();
        int maxiDiff = 0;
        for (int i = 0; i < n - 1; i++) {
            maxiDiff = max(maxiDiff, abs(nums[i] - nums[i + 1]));
        }
        return maxiDiff;
    }
};