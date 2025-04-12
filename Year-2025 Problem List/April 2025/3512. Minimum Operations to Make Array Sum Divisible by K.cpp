# Problem          : 3512. Minimum Operations to Make Array Sum Divisible by K
# Time Complexity  : O(N)
# C++ / Python Solution

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for (auto x : nums) {
            sum += x;
        }
        return sum%k;
    }
};