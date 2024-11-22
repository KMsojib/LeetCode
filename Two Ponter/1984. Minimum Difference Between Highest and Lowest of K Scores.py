# Problem          : 1984. Minimum Difference Between Highest and Lowest of K Scores
# Python Solution
""" ---------------------------------------Python Code---------------------------------------"""
class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        if k == 1:
            return 0
        nums.sort()
        res = float("inf")
        for i in range(k - 1, len(nums)):
            res = min(res, nums[i] - nums[i - k + 1])
        return res
