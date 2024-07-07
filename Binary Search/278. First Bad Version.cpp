/*
    problem link:  https://leetcode.com/problems/first-bad-version/description/
    Time Complexity: O(log N)
    Space Complexity: O(1)
*/

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        int BadVersion = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                BadVersion = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return BadVersion;
    }
};