/*
# Problem          : 1957. Delete Characters to Make Fancy String
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    string makeFancyString(string s) {
        int freq = 1, n = (int)s.size();
        string res = "";

        res.push_back(s[0]);

        for (int i = 1; i < n; i++) {
            if (s[i] == res.back()) {
                freq++;
                if (freq < 3) {
                    res.push_back(s[i]);
                }
            } else {
                res.push_back(s[i]);
                freq = 1;
            }
        }
        return res;
    }
};