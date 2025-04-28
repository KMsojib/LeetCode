# Problem          : 628. Maximum Product of Three Numbers
# Time Complexity  : O(n log n)
# C++ / Python Solution

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = (int)nums.size();
        if (n < 3)
            return 0;
        sort(nums.begin(), nums.end());

        return max(nums[n - 1] * nums[n - 2] * nums[n - 3],
                   nums[n - 1] * nums[0] * nums[1]);
    }
};