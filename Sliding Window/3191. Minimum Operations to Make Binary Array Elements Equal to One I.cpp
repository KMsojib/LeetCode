/*
    Problem linK: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/
    Type: Medium
    Topic: Bit Manipulation, Sliding window
    TC: O(N)
    SP: O(N)

*/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for(int i=0;i<n-2;i++){
            if(nums[i] == 1)    continue;
            for(int j=i;j<=i+2;j++){
                nums[j] = nums[j]^1;
            }
            ans++;
        }

        if(nums[n-2] ==0  || nums[n-1] == 0) return  -1;
        else return ans;
    }
};

