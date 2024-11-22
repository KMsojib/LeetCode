// Using Additional Space.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int cn=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }
            else{
                cn++;
            }
        }

        for(int i=0;i<cn;i++){
            ans.push_back(0);
        }
        nums = ans;
    }
};