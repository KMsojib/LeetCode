/*
# Problem          : 139. Word Break
# Time Complexity  : O(n^2)
# Space Complexity : O(n)
# C++ Solution
*/

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        int n = (int)s.size();
        unordered_set<string> mp(wordDict.begin(), wordDict.end());

        vector<bool> dp(n + 1, false);
        dp[0] = true;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && mp.find(s.substr(j, i - j)) != mp.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};