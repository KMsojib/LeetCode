# Problem          : 1456. Maximum Number of Vowels in a Substring of Given Length
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    int maxVowels(string s, int k) {
        auto isVowel = [](char ch) {
            return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
                   ch == 'u';
        };

        int maxCnt = 0, cnt = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                cnt++;
        }
        maxCnt = cnt;
        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i]))
                cnt++;
            if (isVowel(s[i - k]))
                cnt--;
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt;
    }
};