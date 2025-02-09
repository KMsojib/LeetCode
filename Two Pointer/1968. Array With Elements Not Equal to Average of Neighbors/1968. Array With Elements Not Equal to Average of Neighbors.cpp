/*
# Problem          : 1968. Array With Elements Not Equal to Average of Neighbors
# Time Complexity  : O(n)
# C++ Solution
*/

class Solution {
public:
    vector<int> rearrangeArray(std::vector<int>& nums) {
        int n = nums.size();

        for (int i = 1; i < n - 1; i++) {
            if (2 * nums[i] == (nums[i - 1] + nums[i + 1])) {
                std::swap(nums[i], nums[i + 1]);
            }
        }
        for (int i = n - 2; i > 0; i--) {
            if (2 * nums[i] == (nums[i - 1] + nums[i + 1])) {
                swap(nums[i], nums[i - 1]);
            }
        }
        return nums;
    }
};