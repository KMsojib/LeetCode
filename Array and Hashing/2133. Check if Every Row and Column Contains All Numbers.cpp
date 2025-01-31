/*
# Problem          : 2133. Check if Every Row and Column Contains All Numbers
# Time Complexity  : O(N^2)
# C++ Solution
*/
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = (int)matrix.size();

        for (int i = 0; i < n; ++i) {
            unordered_set<int> rowSet;
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] < 1 || matrix[i][j] > n ||
                    !rowSet.insert(matrix[i][j]).second) {
                    return false;
                }
            }
        }
        for (int j = 0; j < n; ++j) {
            unordered_set<int> colSet;
            for (int i = 0; i < n; ++i) {
                if (matrix[i][j] < 1 || matrix[i][j] > n ||
                    !colSet.insert(matrix[i][j]).second) {
                    return false;
                }
            }
        }
        return true;
    }
};
