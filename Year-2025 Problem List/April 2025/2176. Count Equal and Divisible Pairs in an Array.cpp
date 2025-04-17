# Problem          : 2176. Count Equal and Divisible Pairs in an Array
# Time Complexity  : O(N^2)
# C++ / Python Solution

==================================== Cpp ========================================
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int result = 0;
        int n = (int)nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j] && (i * j) % k == 0) {
                    result += 1;
                }
            }
        }
        return result;
    }
};
// cpp: Runtime 0 ms Beats 100.00 % || Memory 15.56 MB Beats 31.03 %

=================================== Python =======================================
class Solution:
    def countPairs(self, nums: List[int], k: int) -> int:
        n = len(nums)
        res = 0

        for i in range(0, n):
            for j in range(i + 1, n):
                if nums[i] == nums[j] and i * j % k == 0:
                    res += 1
        return res

// py: Runtime 23 ms Beats 49.67% || Memory 17.85 MB Beats 48.17%