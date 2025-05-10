# Problem          : 2918. Minimum Equal Sum of Two Arrays After Replacing Zeros
# Time Complexity  : O(n) + O(m)
# C++ / Python Solution

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        long long zero1 = 0, zero2 = 0;

        for (auto num1 : nums1) {
            sum1 += num1;
            zero1 += (num1 == 0 ? 1 : 0); 
            sum1 += (num1 == 0 ? 1 : 0);
        }

        for (auto num2 : nums2) {
            sum2 += num2;
            zero2 += (num2 == 0 ? 1 : 0);
            sum2 += (num2 == 0 ? 1 : 0);
        }

        if (sum1 < sum2 && zero1 == 0 || sum2 < sum1 && zero2 == 0) {
            return -1;
        }
        return max(sum1, sum2);
    }
};