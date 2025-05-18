// Problem          : 2264. Largest 3-Same-Digit Number in String
// Time Complexity  : O(n)
// C++ / Python Solution

// Brute Force but Time Complexity is O(n)

class Solution {
public:
    string largestGoodInteger(string s) {
        string res = "";
        for (int i = 0; i + 2 < s.size(); ++i) {
            if (s[i] == s[i+1] && s[i] == s[i+2]) {
                string curr = s.substr(i, 3);
                if (curr > res) res = curr;
            }
        }
        return res;
    }
};