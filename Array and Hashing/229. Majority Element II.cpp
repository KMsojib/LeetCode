# Problem          : 229. Majority Element II
# Time Complexity  : 
# C++ Solution

-----------------------------------------------------------------------------------------
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = floor(nums.size())/3;
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto[x,y] : mp){
            if(y>size){
                ans.push_back(x);
            }
        } 
        return ans;
    }
};