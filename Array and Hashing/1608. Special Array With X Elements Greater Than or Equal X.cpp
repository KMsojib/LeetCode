# Problem          : 1608. Special Array With X Elements Greater Than or Equal X
# Time Complexity  : O(N)
# C++ Solution
class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int x = 1; x <= n; ++x) {
            if (nums[n - x] >= x && (x == n || nums[n - x - 1] < x)) {
                return x;
            }
        }
        return -1;
    }
};