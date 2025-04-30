# Problem          : 387. First Unique Character in a String
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }

        int idx = -1;
        for (int i = 0; i < (int)s.size(); i++) {
            if (mp[s[i]] == 1) {
                idx = i;
                break;
            }
        }
        return idx;
    }
};