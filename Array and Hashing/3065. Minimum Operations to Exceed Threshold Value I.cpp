class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int Operation = lower_bound(nums.begin(), nums.end(), k) - nums.begin();
        return Operation;
    }
};