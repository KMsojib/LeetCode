# Problem          : 3392. Count Subarrays of Length Three With a Condition
# Time Complexity  : O(n)
# Space Complexity : O(1)
# C++ / Python Solution

================================== CPP ========================================
class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] == (nums[i - 1] + nums[i + 1]) * 2) {
                cnt += 1;
            }
        }
        return cnt;
    }
};

================================== Python ========================================
class Solution:
    def countSubarrays(self, nums: List[int]) -> int:
        n = len(nums)
        cnt = 0
        for i in range(1, n - 1):
            if nums[i] == (nums[i - 1] + nums[i + 1]) * 2:
                cnt += 1
        return cnt