/*
# Problem          : 2965. Find Missing and Repeated Values
# Time Complexity  : O(N)
# Space Complexity : O(N)
# c++ Solution
*/

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = (int)grid.size();
        std::map<int, int> mp;
        for (auto x : grid) {
            for (auto y : x) {
                mp[y] += 1;
            }
        }

        int miss = 0, repeat = 0;
        for (int i = 1; i <= n * n; i++) {
            if (!mp.count(i)) {
                miss = i;
            } else if (mp[i] == 2) {
                repeat = i;
            }
        }
        return {repeat, miss};
    }
};