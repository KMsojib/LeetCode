/*
# Problem          : 
# Time Complexity  : O(n)
# C++ Solution
*/

/*--------------------------------------------C/*--------------------------------------------*/
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = (int)arr.size();
        unordered_map<int, int> mp;
        for (auto it : arr) {
            mp[it]++;
        }
        for (auto it : arr) {
            if (it != 0 && mp.find(2 * it) != mp.end()) {
                return true;
            }
            if (it == 0 && mp[it] > 1) {
                return true;
            }
        }
        return false;
    }
};

