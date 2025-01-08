/*
# Problem          : 3133. Minimum Array End
# Time Complexity  : O(n)
# C++ Solution
*/
class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        for (int i = 1; i < n; i++) {
            ans = (ans + 1) | x;
        }
        return ans;
    }
};