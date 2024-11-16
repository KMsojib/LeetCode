# Problem          : 164. Maximum Gap
# Time Complexity  : 
# Python Solution

""" -----------------------------//Python//-----------------------------"""
class Solution:
    def maximumGap(self, nums):
        if len(nums) < 2:
            return 0
        nums.sort()
        ans = 0
        for i in range(1, len(nums)):
            ans = max(ans, nums[i] - nums[i - 1])
        return ans

""" ----------------------------- //Using  C++//-----------------------------"""

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]>ans){
                ans=(nums[i]-nums[i-1]);
            }
        }

        return ans;
    }
};
