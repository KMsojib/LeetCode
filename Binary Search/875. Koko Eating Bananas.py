# Problem          : 875. Koko Eating Bananas
# Time Complexity  : O(n⋅log(max(piles)))
# Python Solution

#--------------------------------------------Code#--------------------------------------------
class Solution:
    def feasible(self, speed: int, piles: List[int], H: int) -> bool:
        total_hours = 0
        for pile in piles:
            hours = (pile - 1) // speed + 1
            total_hours += hours
        return total_hours <= H

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left, right = 1, max(piles)
        while left < right:
            mid = left + (right - left) // 2
            if self.feasible(mid, piles, h):
                right = mid
            else:
                left = mid + 1
        return left
