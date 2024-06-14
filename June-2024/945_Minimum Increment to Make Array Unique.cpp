class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        int n = nums.size();
        int cn = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] <= nums[i - 1]) {
                cn += abs(nums[i] - nums[i - 1]) + 1;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return cn;
    }
};