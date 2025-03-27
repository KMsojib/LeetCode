# Problem          : 128. Longest Consecutive Sequence
# Time Complexity  : O(N)
# C++ Solution

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        int n = (int)nums.size();
        sort(nums.begin(), nums.end());

        int cnt = 1, curn = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] + 1 == nums[i]) {
                curn++;
            } else if (nums[i - 1] != nums[i]) {
                cnt = max(cnt, curn);
                curn = 1;
            }
        }
        return max(cnt, curn);
    }
};