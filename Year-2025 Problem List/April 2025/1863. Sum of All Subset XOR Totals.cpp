# Problem          : 1863. Sum of All Subset XOR Totals
# Time Complexity  : O(N^2)
# C++ / Python Solution

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int XorSum = 0;
        int n = (int)nums.size();
        int subsetSize = 1 << n;
        for (int i = 0; i < subsetSize; i++) {
            int currentXor = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    currentXor ^= nums[j];
                }
            }
            XorSum += currentXor;
        }

        return XorSum;
    }
};