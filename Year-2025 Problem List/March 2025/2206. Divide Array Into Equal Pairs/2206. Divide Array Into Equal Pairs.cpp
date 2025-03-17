/*
# Problem          : 2206. Divide Array Into Equal Pairs
# Time Complexity  : O(N)
# Space Complexity : O(N) 
# C++ Solution
*/

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int, int> mp;
        for (auto num : nums) {
            mp[num]++;
        }

        bool ok = true;
        for (auto [x, y] : mp) {
            if (y % 2) {
                ok = false;
                break;
            }
        }
        return ok;
    }
};