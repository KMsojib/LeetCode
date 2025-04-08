# Problem          : 3396. Minimum Number of Operations to Make Elements in Array Distinct
# Time Complexity  : O(N)
# C++ / Python Solution

class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        op = 0
        while len(nums) != len(set(nums)):
            op += 1
            nums = nums[3:]
        return op