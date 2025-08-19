/*
# Problem          : 2348. Number of Zero-Filled Subarrays
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        long long cnt = 0, curn = 0;
        for (int num : nums) {
            if (num == 0) {
                curn += 1;
                cnt += curn;
            } else {
                curn = 0;
            }
        }
        return cnt;
    }
};