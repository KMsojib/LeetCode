class Solution:
    def rob(self, nums: List[int]) -> int:
        Rob1, Rob2 = 0, 0

        for num in nums:
            temp = max(Rob1 + num, Rob2)
            Rob1 = Rob2
            Rob2 = temp
        return Rob2