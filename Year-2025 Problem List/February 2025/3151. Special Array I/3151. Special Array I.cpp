/*
# Problem          : 3151. Special Array I
# Time Complexity  : O(N)
# C++ Solution
*/
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = (int)nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] % 2 == nums[i + 1] % 2) {
                return false;
            }
        }
        return true;
    }
};