# Problem          : 2006. Count Number of Pairs With Absolute Difference K
# Time Complexity  : O(N^2)
# C++ / Python Solution

# ==================================== Cpp ========================================
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int result = 0;
        int n = (int)nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(nums[i] - nums[j]) == k) {
                    result++;
                }
            }
        }
        return result;
    }
};
//cpp: Runtime 0 ms Beats 100.00 % || Memory 16.02 MB Beats 52.94 %

// =================================== Python =======================================
class Solution:
    def countKDifference(self, nums: List[int], k: int) -> int:
        n = len(nums)
        res = 0

        for i in range(0, n):
            for j in range(i + 1, n):
                if abs(nums[i] - nums[j]) == k:
                    res += 1
        return res
// py: Runtime 76 ms Beats 29.23 % || Memory 17.55 MB Beats 97.87 %