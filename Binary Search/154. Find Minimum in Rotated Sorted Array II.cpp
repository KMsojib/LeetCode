/*
    problem link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/description/
    Time Complexity: O(nlogn)
    Space Complexity: O(1)
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int left = 0,right = nums.size()-1;
        while(left < right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == nums[left] && nums[mid] == nums[right]){
                left ++, right--;
            }
            else if(nums[mid] <= nums[right]){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        return nums[left];
    }
};