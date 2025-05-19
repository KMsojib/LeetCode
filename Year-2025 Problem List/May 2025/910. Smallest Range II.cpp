# Problem          : 910. Smallest Range II
# Time Complexity  : O(n log n) 
# C++ / Python Solution

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = (int)nums.size();
        int mini = nums[0], maxi = nums[n - 1], ans = maxi - mini;

        for (int i = 0; i < n - 1; i++) {
            int tmini = nums[i], tmaxi = nums[i + 1];
            ans = min(ans, max(maxi - k, tmini + k) - min(mini + k, tmaxi - k));
        }
        return ans;
    }
};