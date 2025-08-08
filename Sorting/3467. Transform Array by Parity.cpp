/*
# Problem          : 3467. Transform Array by Parity
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/


// sorting took O(nlogn)
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2){
                nums[i] = 1;
            }else{
                nums[i] = 0;
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};

// Counting only took only O(n)
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = (int)nums.size();
        int zero = 0, one = 0;
        for (auto num : nums) {
            if (num % 2) {
                one++;
            } else {
                zero++;
            }
        }

        vector<int> res(zero, 0);
        while (one--) {
            res.push_back(1);
        }
        return res;
    }
};