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

// Usign Frequency Array
class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);
        for (auto ch : s) {
            freq[ch - 'a']++;
        }

        int maxiOdd = -1, minEven = 1001;
        for (auto frq : freq) {
            if (frq == 0)
                continue;
            if (frq % 2 == 0) {
                minEven = min(minEven, frq);
            } else {
                maxiOdd = max(maxiOdd, frq);
            }
        }

        if (maxiOdd == -1 || minEven == 1001)
            return 0;
        return maxiOdd - minEven;
    }
};
