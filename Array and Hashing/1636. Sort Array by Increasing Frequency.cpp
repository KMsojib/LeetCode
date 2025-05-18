# Problem          : 1636. Sort Array by Increasing Frequency
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < (int)nums.size(); i++) {
            mp[nums[i]]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mp[a] == mp[b]) {
                return a > b;
            }
            return mp[a] < mp[b];
        });
        return nums;
    }
};