# Problem          : 2537. Count the Number of Good Subarrays
# Time Complexity  : O(N)
# C++ / Python Solution

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = (int)nums.size();
        int l = 0;
        int r = 0;

        long long result = 0;
        unordered_map<int, int> mp;
        int pairs = 0;

        while (r < n) {
            pairs += mp[nums[r]];
            mp[nums[r]]++;

            while (pairs >= k) {
                result += (n - r);
                mp[nums[l]]--;
                pairs -= mp[nums[l]];
                l += 1;
            }
            r += 1;
        }
        return result;
    }
};