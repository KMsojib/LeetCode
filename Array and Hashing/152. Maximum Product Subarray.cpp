/*
# Problem          : 152. Maximum Product Subarray
# Time Complexity  : O(N)
# C++ Solution
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int curMax = nums[0];
        int curMin = nums[0];

        for (int i = 1; i < (int)nums.size(); i++) {
            int num = nums[i];
            if (num < 0) {
                swap(curMax, curMin);
            }
            curMax = max(num, curMax * num);
            curMin = min(num, curMin * num);

            maxProd = max(maxProd, curMax);
        }
        return maxProd;
    }
};
