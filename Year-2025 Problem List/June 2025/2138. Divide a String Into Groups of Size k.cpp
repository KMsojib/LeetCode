/*
# Problem          : 2138. Divide a String Into Groups of Size k
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int n = s.size();
        while (s.size() % k != 0) {
            s += fill;
        }

        for (int i = 0; i < s.size(); i += k) {
            ans.push_back(s.substr(i, k));
        }

        return ans;
    }
};