/*
# Problem          : 2460. Apply Operations to an Array
# Time Complexity  : O(N)
# C++ Solution
*/

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = (int)nums.size();

        vector<int> ans;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        for (auto num : nums) {
            if (num != 0) {
                ans.push_back(num);
            }
        }

        int finalZeroCount = n - ans.size();
        while (finalZeroCount > 0) {
            ans.push_back(0);
            finalZeroCount--;
        }
        return ans;
    }
};
