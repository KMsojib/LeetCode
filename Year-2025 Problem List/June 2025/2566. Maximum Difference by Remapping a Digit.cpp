/*
# Problem          : 2566. Maximum Difference by Remapping a Digit
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/
class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int id = 0;
        char ch = s[0];
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '9') {
                ch = s[i];
                id = i;
                break;
            }
        }
        string s1 = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ch) {
                s1 += '9';
            } else {
                s1 += s[i];
            }
        }
        string s2 = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == s[0]) {
                s2 += '0';
            } else {
                s2 += s[i];
            }
        }

        return stoi(s1) - stoi(s2);
    }
};