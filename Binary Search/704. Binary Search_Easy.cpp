//pp-1:https://t.ly/VJ1v9
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                break;
            }
            if(target>nums[mid]){
                low=mid+1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
        }
        return ans;
    }
};