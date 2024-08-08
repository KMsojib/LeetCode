#include<bits/stdc++.h>
using namespace std;

int minimizeArrayValue(vector<int>nums){
    int total = nums[0];
    int res = nums[0];
    for(int i=1;i<nums.size();i++){
        total += nums[i];
        res = max(res, (int)ceil(total/(i+1)));
    }
    return res;
}

int main(){
    vector<int>nums = {3,7,1,6};
    cout<<minimizeArrayValue(nums)<<endl;
    return 0;
}
