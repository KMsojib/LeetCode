class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int mini = nums[0], maxi = nums[nums.size() - 1];
        for (auto num : nums) {
            if (num > mini && num < maxi) {
                return num;
            }
        }
        return -1;
    }
};