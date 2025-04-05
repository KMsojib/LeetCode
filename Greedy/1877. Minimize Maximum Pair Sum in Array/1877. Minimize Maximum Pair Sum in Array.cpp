# Problem          : 1877. Minimize Maximum Pair Sum in Array
# Time Complexity  : O(log n)
# C++ Solution

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = (int)nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, nums[i] + nums[n - 1 - i]);
        }
        return ans;
    }
};