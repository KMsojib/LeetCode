# Problem          : 2425. Bitwise XOR of All Pairings
# Time Complexity  : O(N)
# Python Solution
class Solution:
    def xorAllNums(self, nums1: List[int], nums2: List[int]) -> int:
        res = 0
        if len(nums2) % 2 == 1:
            for n in nums1:
                res ^= n
        
        if len(nums1) % 2 == 1:
            for n in nums2:
                res ^= n
        return res