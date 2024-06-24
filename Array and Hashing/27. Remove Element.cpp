/*
    problem link: https://leetcode.com/problems/remove-element/
    Time complexity: O(N)
    Space Complexity: O(N)
*/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        vector<int>ans;
        for(auto[x,y] : mp){
            if(val != x){
                while(y){
                    y--;
                    ans.push_back(x);
                }
            }
        }
        nums = ans;
        return ans.size();
    }
};


/* 
    Time Compelxity : O(n)
    Space Complexiyt: O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                nums[idx] = nums[i];
                idx ++;
            }
        }
        return idx;
    }
};

/*
[3,2,2,3]  val = 3

idx = 0 
3 == 3  [3,2,2,3]
2 != 3  [2 2 2 3]
idx = 1
2 != 3  [2,2,2,3]
idx = 2
3 == 3

after all the nums array is :
[2,2,2,3] and idx = 2

*/