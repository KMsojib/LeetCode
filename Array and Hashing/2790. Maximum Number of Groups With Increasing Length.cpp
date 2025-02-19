/*
# Problem          : 2790. Maximum Number of Groups With Increasing Length
# Time Complexity  : O(N)
# C++ Solution
*/
class Solution {
public:
    int maxIncreasingGroups(vector<int>& u) {
        sort(u.begin(), u.end());
        long long total = 0, k = 0;
        for (auto x : u) {
            total += x;
            if (total >= (k + 1) * (k + 2) / 2) {
                k += 1;
            }
        }
        return k;
    }
};
