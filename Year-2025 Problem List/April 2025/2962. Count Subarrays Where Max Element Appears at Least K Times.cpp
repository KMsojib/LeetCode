# Problem          : 2962. Count Subarrays Where Max Element Appears at Least K Times
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long max_cnt = 0, max_num = *max_element(nums.begin(), nums.end());
        long long left = 0, n = (int)nums.size(), res = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] == max_num) {
                max_cnt++;
            }

            while (max_cnt == k) {
                if (nums[left] == max_num) {
                    max_cnt--;
                }
                left++;
            }
            res += left;
        }
        return res;
    }
};