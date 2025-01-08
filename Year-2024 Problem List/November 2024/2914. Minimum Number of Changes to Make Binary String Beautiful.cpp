// Problem: 2914. Minimum Number of Changes to Make Binary String Beautiful
// C++ Solution
class Solution {
public:
    int minChanges(string s) {
        int cn = 0;
        for (int i = 0; i < (int)s.size(); i += 2) {
            if (s[i] != s[i + 1]) {
                cn++;
            }
        }
        return cn;
    }
};


/*-----------------------------------------------------------------------------------*/
// Python Solution:
class Solution:
    def minChanges(self, s: str) -> int:
        coinChange = 0
        for i in range(0, len(s), 2):
            if s[i] != s[i + 1]:
                coinChange += 1

        return coinChange