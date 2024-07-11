/*
    problem statement: Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array 
    such that nums[i] == nums[j] and abs(i - j) <= k.

    Example 1: 
        Input: nums = [1,2,3,1], k = 3
        Output: true
    Example 2:
        Input: nums = [1,2,3,1,2,3], k = 2
        Output: false

    Using Map: TC:O(n*k)
    Usign Unordered_map : TC: O(N)

*/
/*  Map */
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, pair<bool, int>> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (mp[nums[i]].first == true) {
                pair<bool, int> vp = mp[nums[i]];
                if (abs(i - vp.second) <= k) {
                    return true;
                } else {
                    mp[nums[i]] = {true, i};
                }
            } else {
                mp[nums[i]] = {true, i};
            }
        }
        return false;
    }
};

/* unordered_map */
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) != mp.end()) {
                if (abs(mp[nums[i]] - i) <= k) {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};