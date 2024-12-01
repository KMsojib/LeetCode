# Problem          : 137. Single Number II
# Time Complexity  : O(n)
# Space Complexity : O(n)
# Python Solution

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        freq_map = Counter(nums)
        for num, count in freq_map.items():
            if count == 1:
                return num