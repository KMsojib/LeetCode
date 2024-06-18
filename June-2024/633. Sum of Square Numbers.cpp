/* problem link: https://leetcode.com/problems/sum-of-square-numbers/?envType=daily-question&envId=2024-06-17
   type: Medium
   Topic: Two pointer
   TC: Sqrt(n)
   SC: O(1)
*/

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l = 0, r = sqrt(c);
        while (l <= r) {
            if (pow(l, 2) + pow(r, 2) == c) {
                return true;
            } else if (pow(l, 2) + pow(r, 2) > c) {
                r--;
            } else {
                l++;
            }
        }
        return false;
    }
};
