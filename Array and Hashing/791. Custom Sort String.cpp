/*
# Problem          : 791. Custom Sort String
# Time Complexity  : O(n)
# space Complexity : O(n) maybe O(1) because constant are small.
# C++ Solution
*/

class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }

        string res = "";
        for (char ord : order) {
            while (mp[ord]) {
                res += ord;
                mp[ord]--;
            }
        }
        for (auto [x, y] : mp) {
            while (y--) {
                res += x;
            }
        }
        return res;
    }
};