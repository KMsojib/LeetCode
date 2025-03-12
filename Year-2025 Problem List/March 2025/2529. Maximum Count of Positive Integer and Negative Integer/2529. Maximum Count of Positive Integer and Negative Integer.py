# Problem          : 2529. Maximum Count of Positive Integer and Negative Integer
# Time Complexity  : O(N)
# Python Solution

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        neg = 0
        pos = 0

        for num in nums:
            if num < 0:
                neg += 1
            if num > 0:
                pos += 1

        return max(pos, neg)