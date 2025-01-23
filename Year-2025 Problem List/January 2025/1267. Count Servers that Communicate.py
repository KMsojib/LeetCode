# Problem          : 1267. Count Servers that Communicate
# Time Complexity  : O(N*M)
# Space Complexity : O(N+M)
# Python Solution

class Solution:
    def countServers(self, grid: List[List[int]]) -> int:
        ROW, COL = len(grid), len(grid[0])

        row_cnt = [0] * ROW
        col_cnt = [0] * COL

        for r in range(ROW):
            for c in range(COL):
                if grid[r][c] == 1:
                    row_cnt[r] += 1
                    col_cnt[c] += 1

        res = 0
        for r in range(ROW):
            for c in range(COL):
                if grid[r][c] == 1 and (max(row_cnt[r], col_cnt[c]) > 1):
                    res += 1
        return res
