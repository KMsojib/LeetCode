/*
# Problem          : 374. Guess Number Higher or Lower
# Time Complexity  : O(log n)
# space Complexity : O(1)
# C++ Solution
*/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int left = 0, right = n, ans = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int ok = guess(mid);
            if (ok == -1) {
                right = mid - 1;
            } else if (ok == 1) {
                left = mid + 1;
            } else {
                ans = mid;
                break;
            }
        }
        return ans;
    }
};