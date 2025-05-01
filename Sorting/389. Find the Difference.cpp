# Problem          : 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char ch;
        for (int i = 0; i < max(s.size(), t.size()); i++) {
            if (t[i] != s[i]) {
                ch = t[i];
                break;
            }
        }
        return ch;
    }
};