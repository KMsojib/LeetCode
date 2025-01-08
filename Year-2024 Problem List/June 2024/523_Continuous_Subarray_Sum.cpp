#include<bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) {
    map<int, bool> mp;
    int sum = 0;
    for (auto x : nums) {
        mp[x] = true;
        sum += x;
    }
    if (sum % k == 0 || mp[sum % k] == true || (mp[0]==true && nums.size()>1)) {
        return true;
    } else {
        return false;
    }
}
int main()
{
    vector<int>nums = {23,2,4,6,7};
    int k = 6;
    cout<<checkSubarraySum(nums,k)<<endl;
    return 0;
}