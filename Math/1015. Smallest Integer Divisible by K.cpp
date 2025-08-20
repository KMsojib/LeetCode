/*
# Problem          : 1015. Smallest Integer Divisible by K
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int rem = 0;
        for (int i = 1; i <= k; i++) {
            rem = (rem * 10 + 1) % k;
            if (rem == 0) {
                return i;
            }
        }
        return -1;
    }
};