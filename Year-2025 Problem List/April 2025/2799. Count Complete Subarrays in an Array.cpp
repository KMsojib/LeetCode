# Problem          : 2799. Count Complete Subarrays in an Array
# Time Complexity  : O(n^2)
# C++ / Python Solution

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        int uniqueCount = unordered_set<int>(nums.begin(), nums.end()).size();
        int result = 0;

        for (int start = 0; start < n; ++start) {
            unordered_set<int> seen;
            for (int end = start; end < n; ++end) {
                seen.insert(nums[end]);
                if (seen.size() == uniqueCount) {
                    result += (n - end);
                    break;
                }
            }
        }
        return result;
    }
};