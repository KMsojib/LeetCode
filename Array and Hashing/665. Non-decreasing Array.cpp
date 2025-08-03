/*
# Problem          : 665. Non-decreasing Array
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = (int)nums.size();

        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                if (i - 1 >= 0 && nums[i - 1] > nums[i + 1]) {
                    nums[i + 1] = nums[i];
                } else {
                    nums[i] = nums[i + 1];
                }
                break;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
};
