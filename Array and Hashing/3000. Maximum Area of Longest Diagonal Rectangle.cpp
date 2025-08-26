/*
# Problem          : 3000. Maximum Area of Longest Diagonal Rectangle
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0;
        double maxDiag = 0.0;

        for (auto &d : dimensions) {
            int x = d[0];
            int y = d[1];
            double diag = sqrt(1.0 * x * x + 1.0 * y * y);
            int area = x * y;

            if (diag > maxDiag || (fabs(diag - maxDiag) < 1e-9 && area > maxArea)) {
                maxDiag = diag;
                maxArea = area;
            }
        }
        return maxArea;
    }
};