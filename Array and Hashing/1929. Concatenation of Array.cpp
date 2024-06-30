/*
    problem link: https://leetcode.com/problems/concatenation-of-array/description/
    Time complexity: O(N)
    Space Complexity: O(N)
*/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();++i){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();++i){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};