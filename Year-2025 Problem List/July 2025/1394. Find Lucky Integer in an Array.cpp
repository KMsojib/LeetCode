/*
# Problem          : 1394. Find Lucky Integer in an Array
# Time Complexity  : O(n)
# space Complexity : O(n)
# C++ Solution
*/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        for (auto val : arr) {
            mp[val]++;
        }

        int res = -1;
        for (auto [x, y] : mp) {
            if (x == y) {
                res = max(res, x);
            }
        }
        return res;
    }
};