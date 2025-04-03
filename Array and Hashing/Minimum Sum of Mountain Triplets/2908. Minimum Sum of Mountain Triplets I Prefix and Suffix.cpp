# Problem          : 2908. Minimum Sum of Mountain Triplets I
# Time Complexity  : 
# Using Prefix and Suffix
# Space Complexity : O(n)
# Time Complexity  : O(n)

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = (int)nums.size();
        int minSum = INT_MAX;

        vector<int> prefixMin(n), suffixMin(n);
        prefixMin[0] = nums[0];
        suffixMin[n - 1] = nums[n - 1];

        for (int i = 1; i < n; i++) {
            prefixMin[i] = min(prefixMin[i - 1], nums[i]);
            suffixMin[n - 1 - i] = min(suffixMin[n - i], nums[n - 1 - i]);
        }

        for (int j = 1; j < n - 1; j++) {
            if (prefixMin[j - 1] < nums[j] && nums[j] > suffixMin[j + 1]) {
                minSum =
                    min(minSum, prefixMin[j - 1] + nums[j] + suffixMin[j + 1]);
            }
        }
        return (minSum == INT_MAX) ? -1 : minSum;
    }
};