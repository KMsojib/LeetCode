class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto x = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        return x;
    }
};
