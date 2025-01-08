class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> vp(m, vector<int>(n));
        int org_len = original.size();
        if (n * m != org_len) {
            return {};
        } else {
            int idx = 0;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    vp[i][j] = original[idx];
                    idx++;
                }
            }
            return vp;
        }
    }
};