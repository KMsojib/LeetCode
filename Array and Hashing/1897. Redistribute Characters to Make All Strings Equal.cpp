/*
# Problem          : 1897. Redistribute Characters to Make All Strings Equal
# Time Complexity  : O(n)
# space Complexity : O(26)
# C++ Solution
*/

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char, int> mp;
        for (auto word : words) {
            for (auto ch : word) {
                mp[ch]++;
            }
        }
        int n = (int)words.size();
        for (auto [x, y] : mp) {
            if (y % n) {
                return false;
            }
        }
        return true;
    }
};