/*
# Problem          : 3355. Zero Array Transformation I
# Time Complexity  : O(N)
# Space Complexity : O(N)
# C++ Solution
*/

class Solution {
public:
    bool isZeroArray(std::vector<int>& a,
                     std::vector<std::vector<int>>& queries) {
        int n = (int)a.size();
        std::vector<int> pref(n + 1, 0);
        for (auto querie : queries) {
            pref[querie[0]]++;
            pref[querie[1] + 1]--;
        }

        int op = 0;
        for (int i = 0; i < n; i++) {
            op += pref[i];
            if (op < a[i]) {
                return false;
            }
        }
        return true;
    }
};