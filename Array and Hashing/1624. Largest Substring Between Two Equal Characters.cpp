# Problem          : 1624. Largest Substring Between Two Equal Characters
# Time Complexity  : O(n)
# Space Complexity : O(n)
# C++ / Python Solution


class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char, int> mp;
        int subLen = -1;
        for (int i = 0; i < (int)s.size(); i++) {
            if (mp.count(s[i]) == 0) {
                mp[s[i]] = i;
            } else {
                subLen = max(subLen, i - mp[s[i]] - 1);
            }
        }
        return subLen;
    }
};