/*
    Problem linK: https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/description/?envType=daily-question&envId=2024-06-24
    Type: Hard
    Topic: Bit Manipulation, Sliding window
    TC: O(N)
    SP: O(N)


    some similar question:
    1. https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/
    2. https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/description/

*/

class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0, time = 0;
        vector<int> flipped(n, 0);
        for (int i = 0; i < n; i++) {
            if (i >= k) {
                time -= flipped[i - k];
            }

            if ((nums[i] == 1 && time % 2 == 1) ||
                nums[i] == 0 && time % 2 == 0) {
                if (i + k > n)
                    return -1;
                ans++;
                time++;
                flipped[i] = 1;
            }
        }
        return ans;
    }
};