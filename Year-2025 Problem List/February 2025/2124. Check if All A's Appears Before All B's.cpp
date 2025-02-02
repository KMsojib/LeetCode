/*

# Problem          : 2124. Check if All A's Appears Before All B's
# Time Complexity  : O(N)
# Space Complexity : O(1)
# C++ Solution

*/

class Solution {
public:
    bool checkString(const std::string& s) {
        int n = s.size();
        int idx = s.find('b');
        if (n == 1 || idx == std::string::npos)
            return true;
        for (int i = idx + 1; i < n; ++i) {
            if (s[i] == 'a') {
                return false;
            }
        }
        return true;
    }
};