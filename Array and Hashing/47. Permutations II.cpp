class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> vp = nums;
        vector<vector<int>> ans;
        do {
            ans.push_back(nums);
            next_permutation(nums.begin(), nums.end());
        } while (vp != nums);
        return ans;
    }
};