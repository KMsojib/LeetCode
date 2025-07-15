/*
# Problem          : 3136. Valid Word
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    bool isValid(string word) {
        int n = (int)word.size();
        if (n < 3) {
            return false;
        }
        bool has_vowel = false, has_cons = false;
        for (auto ch : word) {
            if (isalpha(ch)) {
                ch = tolower(ch);
                if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or
                    ch == 'u') {
                    has_vowel = true;
                } else {
                    has_cons = true;
                }
            } else if (!isdigit(ch)) {
                return false;
            }
        }
        return has_vowel && has_cons;
    }
};