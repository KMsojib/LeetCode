/*
# Problem          : 1365. How Many Numbers Are Smaller Than the Current Number
# Time Complexity  : 
# space Complexity : 
# C++ Solution
*/

// Brute Force Approach
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;

        int n = (int)nums.size();
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    if (nums[i] > nums[j]) {
                        cnt++;
                    }
                }
            }
            res.push_back(cnt);
        }
        return res;
    }
};