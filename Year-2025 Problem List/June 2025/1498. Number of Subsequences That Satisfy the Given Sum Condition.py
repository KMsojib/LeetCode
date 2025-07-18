/*
# Problem          : 1498. Number of Subsequences That Satisfy the Given Sum Condition
# Time Complexity  : O(n log n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution:
    def numSubseq(self, nums: List[int], target: int) -> int:
        nums.sort()
        right = len(nums) - 1
        mod = 10**9 + 7
        res = 0
        for i, left in enumerate(nums):
            while left + nums[right] > target and i <= right:
                right -= 1
            if i <= right:
                res += 2 ** (right - i)
                res %= mod

        return res