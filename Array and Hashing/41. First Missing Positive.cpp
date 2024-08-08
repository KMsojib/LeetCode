/*
    Problem link:https://leetcode.com/problems/first-missing-positive/
    Time Complexity:
    Space Complexity:
*/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, bool> HashTable;
        int mini = INT_MAX;
        for (auto x : nums) {
            HashTable[x] = true;
            if (x < mini && x > 0) {
                mini = x;
            }
        }
        int res = 0;
        if (mini > 1) {
            return 1;
        }
        for (int i = mini; i < INT_MAX; i++) {
            if (HashTable[i] && !HashTable[i + 1]) {
                res = i + 1;
                break;
            }
        }
        return res;
    }
};
// Optimization here: TC: O(N) && SC: O(1)