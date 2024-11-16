# Problem          : 1833. Maximum Ice Cream Bars
# Time Complexity  : O(n)
# Python Solution

""" -----------------------------Code-----------------------------"""
class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        buy = 0
        n = len(costs)
        costs.sort()
        for i in range(0, n):
            if costs[i] <= coins:
                buy += 1
                coins -= costs[i]
        return buy
