/*
# Problem          : 80. Remove Duplicates from Sorted Array II
# Time Complexity  : 
# C++ Solution
*/
/*-----------------------------------------C++/*-----------------------------------------*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }

        int cn = 0;
        for(auto [x,y] : mp){
            int lim = min(2,y);
            for(int i=0;i<lim;i++){
                ans.push_back(x);
            }
            cn+=(y-lim);
        }
        nums = ans;
        return ans.size();

    }
};

/*-----------------------------------------C++ Optimal Code-----------------------------------------*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = (int)nums.size();
        if (n <= 2) {
            return n==1 ? 1 : 2;
        }
        int index = 2;
        for (int i = 2; i < n; ++i) {
            if (nums[i] != nums[index - 2]) {
                nums[index] = nums[i];
                index++;
            }
        }
        nums.resize(index);
        return index;
    }
};