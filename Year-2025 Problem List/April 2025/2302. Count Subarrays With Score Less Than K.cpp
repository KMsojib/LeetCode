# Problem          : 2302. Count Subarrays With Score Less Than K
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long product = 0;
        long long count = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            product += nums[right];
            int len = right - left + 1;

            while ((product * len) >= k) {
                product -= nums[left++];
                len = right - left + 1;
            }

            count += (right - left + 1);
        }
        return count;
    }
};