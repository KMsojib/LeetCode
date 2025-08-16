/*
# Problem          : 342. Power of Four
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;

        while (n % 4 == 0) {
            n /= 4;
        }
        return n == 1;
    }
};