# Problem          : 1877. Minimize Maximum Pair Sum in Array
# Time Complexity  : O(log n)
# C++ / Python Solution

class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)
        ans = 0

        for i in range(n // 2):
            ans = max(ans, nums[i] + nums[n - 1 - i])
        return ans