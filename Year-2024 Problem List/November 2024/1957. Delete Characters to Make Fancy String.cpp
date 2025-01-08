// Problem: 1957. Delete Characters to Make Fancy String
// C++ Solution
class Solution {
public:
    string makeFancyString(string s) {
        int i = 1, cn = 1, n = (int)s.size();
        string ans = "";
        char prv = s[0];
        ans.push_back(s[0]);
        for (int i = 1; i < n; i++) {
            if (s[i] == prv) {
                cn++;
            } else {
                prv = s[i];
                cn = 1;
            }
            if (cn < 3) {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};