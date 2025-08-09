/*
# Problem          : 2139. Minimum Moves to Reach Target Score
# Time Complexity  : O(target)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int cnt = 0;
        if (maxDoubles == 0) {
            return target - 1;
        }
        while (target > 1) {
            if (target % 2 == 0 && maxDoubles > 0) {
                maxDoubles -= 1;
                cnt += 1;
                target /= 2;
            } else if (maxDoubles == 0) {
                cnt += target - 1;
                break;
            } else {
                target -= 1;
                cnt += 1;
            }
        }
        return cnt;
    }
};