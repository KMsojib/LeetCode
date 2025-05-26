# Problem          : 1827. Minimum Operations to Make the Array Increasing
# Time Complexity  : O(n)
# C++ / Python Solution


# C++ 
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int minOp = 0;
        int n = (int)nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] <= nums[i - 1]) {
                minOp += abs((nums[i-1] - nums[i]) + 1);
                nums[i] += abs((nums[i-1] - nums[i]) + 1);

            }
        }
        return minOp;
    }
};


# Python
class Solution:
    def minOperations(self, nums: List[int]) -> int:
        minOp = 0
        n = len(nums)
        for i in range(1, n):
            if nums[i] <= nums[i - 1]:
                diff = (nums[i - 1] - nums[i]) + 1
                minOp += diff
                nums[i] += diff
        return minOp