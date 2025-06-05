# Problem          : 1163. Last Substring in Lexicographical Order
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    string lastSubstring(string s) {
        int n = (int)s.size();
        int i = 0, j = 1, k = 0;
        while (j + k < n) {
            if (s[i + k] == s[j + k]) {
                k++;
            } else if (s[i + k] < s[j + k]) {
                // suffix 
                i = max(i + k + 1, j);
                j = i + 1;
                k = 0;
            } else {
                j = j + k + 1;
                k = 0;
            }
        }
        return s.substr(i);
    }
};