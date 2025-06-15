/*
# Problem          : 1432. Max Difference You Can Get From Changing an Integer
# Time Complexity  : O(n)
# space Complexity : O(n)
# C++ Solution
*/

class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
        string s1 = s;
        char ch = ' ';

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '9') {
                ch = s[i];
                break;
            }
        }
        for (auto& x : s1) {
            if (x == ch) {
                x = '9';
            }
        }

        string s2 = s;
        ch = ' ';
        if (s[0] != '1') {
            ch = s[0];
            for (auto& c : s2) {
                if (c == ch)
                    c = '1';
            }
        } else {
            for (int i = 1; i < s.length(); i++) {
                if (s[i] != '0' && s[i] != '1') {
                    ch = s[i];
                    break;
                }
            }
            for (int i = 1; i < s.length(); i++) {
                if (s2[i] == ch) {
                    s2[i] = '0';
                }
            }
        }
        return stoi(s1) - stoi(s2);
    }
};