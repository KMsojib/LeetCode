# Problem          : 1446. Consecutive Characters
# Time Complexity  : O(N)
# C++ / Python Solution

class Solution {
public:
    int maxPower(string s) {
        int ans = 0;
        int currStreak = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i == 0 || s[i] == s[i - 1]) {
                currStreak++;
            } else {
                currStreak = 1;
            }

            ans = max(ans, currStreak);
        }

        return ans;
    }
};
