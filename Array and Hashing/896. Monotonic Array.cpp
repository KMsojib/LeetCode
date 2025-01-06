/*
# Problem          : 896. Monotonic Array
# Time Complexity: (O(n))
# Space Complexity: (O(1)) 
# C++ Solution
*/
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        return is_sorted(nums.begin(),nums.end()) or is_sorted(nums.begin(),nums.end(),greater<int>());
    }
};
// Smae solution with different approach
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                decreasing = false;
            }
            if (nums[i] < nums[i - 1]) {
                increasing = false;
            }
        }
        return increasing || decreasing;
    }
};