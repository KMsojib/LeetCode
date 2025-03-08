# Problem          : 485. Max Consecutive Ones
# Time Complexity  : O(N)
# Python Solution

class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        MaximumOneCount = 0
        CurnCount = 0
        left = 0
        right = 0

        while right < len(nums):
            if nums[right] == 1:
                CurnCount += 1
                right += 1
            else:
                MaximumOneCount = max(MaximumOneCount, CurnCount)
                CurnCount = 0
                right += 1
                left = right

        MaximumOneCount = max(MaximumOneCount, CurnCount)

        return MaximumOneCount