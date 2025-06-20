# Problem          : 3142. Check if Grid Satisfies Conditions
# Time Complexity  : O(n^2)
# C++ / Python Solution

class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + 1 < n && grid[i][j] != grid[i + 1][j]) {
                    return false;
                }
                if (j + 1 < m && grid[i][j] == grid[i][j + 1]) {
                    return false;
                }
            }
        }
        return true;
    }
};