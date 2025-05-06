# Problem          : 1920. Build Array from Permutation
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};