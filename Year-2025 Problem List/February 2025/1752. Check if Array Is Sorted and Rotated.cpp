/*
# Problem          : 1752. Check if Array Is Sorted and Rotated
# Time Complexity  : O(n)
# Space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = (int)nums.size();
        int count = 1;
        for (int i = 1; i < n * 2; i++) {
            if (nums[(i - 1) % n] <= nums[i % n]) {
                count++;
            } else {
                count = 1;
            }

            if (count == n) {
                return true;
            }
        }

        return n == 1;
    }
};
