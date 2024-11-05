/*
    Problem link: https://leetcode.com/problems/two-sum/description/
    Problem Analysis: find two elements that values sum = target and return these two index
*/


// /*---------------------------------------------- BruteForce Aproach ----------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main()
{
    vector<int>nums = {2,7,11,15};
    int target = 9;
    vector<int>ans = twoSum(nums,target);
    return 0;
}



/*---------------------------------------------- Hashmap Aproach ----------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]=i+1;
    }

    for(int i=0;i<nums.size();i++){
        int temp = target - nums[i];
        if(mp[temp]!=0 && mp[temp]!=i+1){
            return {i+1,mp[temp]};
        }
    }
    return {-1,-1};
}

int main()
{
    vector<int>nums = {2,7,11,15};
    int target = 9;
    vector<int>ans = twoSum(nums,target);
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
