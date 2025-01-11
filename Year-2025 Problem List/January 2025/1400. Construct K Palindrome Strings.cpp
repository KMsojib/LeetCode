/*
# Problem          : 1400. Construct K Palindrome Strings
# Time Complexity  : O(N)
# C++ Solution
*/

class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = (int)s.size();
        if (n < k) {
            return false;
        }
        map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }

        int oddCount = 0;
        for (auto [key, freq] : mp) {
            if (freq % 2 == 1) {
                oddCount++;
            }
        }
        return oddCount <= k;
    }
};