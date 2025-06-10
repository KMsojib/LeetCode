/*
# Problem          : 3442. Maximum Difference Between Even and Odd Frequency I
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    int maxDifference(string s) {
        map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }

        int maxiOdd = 0, maxiEven = 10000;
        for (auto [x, y] : mp) {
            if (y % 2) {
                maxiOdd = max(maxiOdd, y);
            } else {
                maxiEven = min(maxiEven, y);
            }
        }
        return maxiOdd - maxiEven;
    }
};