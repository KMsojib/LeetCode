# Problem          : 1513. Number of Substrings With Only 1s
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    int numSub(string s) {
        int ans = 0;
        int cn = 0;
        int MOD = 1e9 + 7;

        for (auto ch : s) {
            if (ch == '1') {
                cn += 1;
            } else {
                ans = (ans + (long long)cn * (cn + 1) / 2 % MOD) % MOD;
                cn = 0;
            }
        }
        ans = (ans + (long long)cn * (cn + 1) / 2 % MOD) % MOD;
        return ans;
    }
};