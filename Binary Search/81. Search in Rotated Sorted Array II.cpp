/*
    Problem link:https:https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
    Time Complexity: O(logn)
    Space Complexity: O(1)

*/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Target in mid pos:
            if (target == nums[mid]) {
                return true;
            }
            else if (nums[mid] == nums[left] && nums[mid] == nums[right]) {
                left++;
                right--;
            }
            // left side are sorted
            else if (nums[mid] >= nums[left]) {
                if (target >= nums[left] && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            // right side are sorted then
            else {
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};