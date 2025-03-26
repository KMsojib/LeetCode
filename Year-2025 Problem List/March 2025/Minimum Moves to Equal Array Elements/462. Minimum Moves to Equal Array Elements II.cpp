# Problem          : 462. Minimum Moves to Equal Array Elements II
# Time Complexity  : O(N)
# C++ Solution

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = (int)nums.size(), minOp = 0;
        sort(nums.begin(), nums.end());

        int median = nums[n / 2];
        for (int i = 0; i < n; i++) {
            minOp += std::abs(nums[i] - median);
        }
        return minOp;
    }
};
