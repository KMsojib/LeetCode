/*
# Problem          : 1685. Sum of Absolute Differences in a Sorted Array
# Time Complexity  : O(N)
# C++ Solution
*/
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int n = (int)nums.size();

        int total_sum = std::accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;

        for (int i = 0; i < n; i++) {
            int right_sum = total_sum - nums[i] - left_sum;
            int left = i, right = n - i - 1;

            int tot = left * nums[i] - left_sum + right_sum - right * nums[i];
            ans.push_back(tot);

            left_sum += nums[i];
        }
        return ans;
    }
};
