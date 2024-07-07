/*
    problem link:  https://leetcode.com/problems/valid-perfect-square/
    Time Complexity: O(log N)
    Space Complexity: O(1)
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1, right = num;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (1LL*mid * mid == num) {
                return true;
            } else if (mid * mid > num) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};