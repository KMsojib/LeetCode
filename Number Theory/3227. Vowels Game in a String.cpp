/*
# Problem          : 3227. Vowels Game in a String
# Time Complexity  : O(1)
# C++ Solution
*/
class Solution {
public:
    bool doesAliceWin(string s) {
        int odd = 0;
        for (auto ch : s) {
            if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') {
                odd++;
            }
        }
        return (odd % 2 == 0 && odd != 0) || (odd % 2 == 1) ? true : false;
    }
};