class Solution:
    def findGCD(self, nums: List[int]) -> int:
        maxi = max(nums)
        mini = min(nums)
        return math.gcd(maxi,mini)