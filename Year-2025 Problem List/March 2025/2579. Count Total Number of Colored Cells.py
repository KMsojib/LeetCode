# Problem          : 2579. Count Total Number of Colored Cells
# Time Complexity  : O(1)
# Python Solution

# Using Linear Time Complexity

class Solution:
    def coloredCells(self, n: int) -> int:
        res = 1
        for i in range(n):
            res += (4 * i)
        return res


# Using Constant Time Complexity and Guassian Formula

class Solution:
    def coloredCells(self, n: int) -> int:
        return 1 + n * (n - 1) * 2
