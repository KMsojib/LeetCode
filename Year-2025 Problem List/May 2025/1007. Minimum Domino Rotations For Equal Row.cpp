# Problem          : 1007. Minimum Domino Rotations For Equal Row
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    int rotation(int target, vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        int top_cnt = 0, bottom_cnt = 0;
        for (int i = 0; i < n; i++) {
            if (target != tops[i] && target != bottoms[i]) {
                return INT_MAX;
            } else if (target != tops[i]) {
                top_cnt += 1;
            } else if (target != bottoms[i]) {
                bottom_cnt += 1;
            }
        }
        return min(top_cnt, bottom_cnt);
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int rotations_top = rotation(tops[0], tops, bottoms);
        int rotations_bottom = rotation(bottoms[0], tops, bottoms);

        int result = min(rotations_top, rotations_bottom);
        return result == INT_MAX ? -1 : result;
    }
};