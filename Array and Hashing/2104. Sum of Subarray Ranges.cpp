/*
# Problem          : 2104. Sum of Subarray Ranges
# Time Complexity  : O(n)
# C++ Solution
*/
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
        int n = (int)nums.size();
        for (int i = 0; i < n; i++) {
            int maxVal = nums[i], minVal = nums[i];
            for (int j = i; j < n; j++) {
                maxVal = max(maxVal, nums[j]);
                minVal = min(minVal, nums[j]);
                sum += (maxVal - minVal);
            }
        }
        return sum;
    }
};