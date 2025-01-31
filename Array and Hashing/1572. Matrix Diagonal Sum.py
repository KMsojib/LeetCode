# Problem          : 1572. Matrix Diagonal Sum
# Time Complexity  : O(N^2)
# Python Solution

class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:

        n = len(mat)
        sum = 0
        for i in range(n):
            for j in range(n):
                if i == j or i + j == n - 1:
                    sum += mat[i][j]

        return sum
