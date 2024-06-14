#include<bits/stdc++.h>
using namespace std;
int First_occ(vector<int>& nums, int target) {
    int left = 0, right = nums.size()-1;
    int first_occ = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            first_occ = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return first_occ;
}
int Second_occ(vector<int>& nums, int target) {
    int left = 0, right = nums.size()-1;
    int second_occ = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            second_occ = mid;
            left = mid + 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return second_occ;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int first = First_occ(nums, target);
    if (first == -1) {
        return {-1, -1};
    }
    int second = Second_occ(nums, target);
    return {first, second};
}

int main()
{
    vector<int>nums = {1};
    int target = 1;
    vector<int>ans = searchRange(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}