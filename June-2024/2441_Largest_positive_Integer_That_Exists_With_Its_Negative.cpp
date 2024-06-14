/*
    1. not contain 0
    2. largest positive interger that have also negative integer
        ex: -7 must be +7 thakte hobe.
    3. if no k & -k then retunr -1

*/

#include<bits/stdc++.h>
using namespace std;

int findMaxK(vector<int>& nums) {
    // int value  = -1;
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]<0){
    //         value = nums[i];
    //         if(find(nums.begin(),nums.end(),value*-1)!=nums.end()){
    //             return value*-1;
    //         }
    //     }
    // }
    // return -1;
    // vector<int>negative;
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]<0){
    //         negative.push_back(nums[i]);
    //     }
    // }
    // sort(negative.begin(),negative.end());
    // for(int i=0;i<negative.size();i++){
    //     if(find(nums.begin(),nums.end(),negative[i]*-1)!=nums.end()){
    //         return negative[i]*-1;
    //     }
    // }
    // return -1;

    // Time complexity is : O(log n)
    sort(nums.begin(),nums.end());
    for(int i=nums.size()-1;i>=0;i--){
        int x= nums[i];
        if(binary_search(nums.begin(),nums.end(),x)){
            return nums[i];
        }
    }
    return -1;
}
int main()
{
    //vector<int>nums = {-1,10,6,7,-7,1};
    int n;  cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<findMaxK(nums)<<endl;
    return 0;
}
