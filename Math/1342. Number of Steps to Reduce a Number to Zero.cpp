/*
# Problem          : 1342. Number of Steps to Reduce a Number to Zero
# Time Complexity  : O(long n)
# space Complexity : O(1)
# C++ Solution
*/

// Aproach :- 1

class Solution {
public:
    int numberOfSteps(int n) {
        int cnt = 0;
        while (n > 0) {
            if (n % 2 == 0) {
                cnt++;
                n /= 2;
            } else {
                n -= 1;
                cnt++;
            }
        }
        return cnt;
    }
};
// Runtime 0 ms Beats 100.00 % || Memory 7.88 MB Beats 79.03 %


// Aproach :- 2 Binary count
class Solution {
public:
    int numberOfSteps(int num) {
        return num ? 31 - __builtin_clz(num) + __builtin_popcount(num) : 0;
    }
};