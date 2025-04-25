# Problem          : 1658. Minimum Operations to Reduce X to Zero
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = (int)nums.size();
        int total_sum = std::accumulate(nums.begin(), nums.end(), 0);
        int target = total_sum - x;
        if (target < 0)
            return -1;
        if (target == 0)
            return nums.size();

        int curn_sum = 0, max_length = -1, left = 0;
        for (int right = 0; right < n; right++) {
            curn_sum += nums[right];

            while (curn_sum > target && left <= right) {
                curn_sum -= nums[left];
                left += 1;
            }

            if (curn_sum == target) {
                max_length = std::max(max_length, right - left + 1);
            }
        }
        return (max_length == -1) ? -1 : n - max_length;
    }
};