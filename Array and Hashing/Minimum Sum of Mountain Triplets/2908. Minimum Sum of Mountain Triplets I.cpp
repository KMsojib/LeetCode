# Problem          : 2908. Minimum Sum of Mountain Triplets I
# Time Complexity  : O(N^3)
# Cpp Solution

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = (int)nums.size();
        int sum = INT_MAX;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] < nums[j] && nums[k] < nums[j]) {
                        sum = min(sum, nums[i] + nums[j] + nums[k]);
                        ok = true;
                    }
                }
            }
        }
        return ((sum == INT_MAX && ok == false) ? -1 : sum);
    }
};