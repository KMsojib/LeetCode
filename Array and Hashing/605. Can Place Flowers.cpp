/*
# Problem          : 605. Can Place Flowers
# Time Complexity  : O(N)
# C++ Solution
*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& s, int n) {
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] == 0 && n > 0) {
                bool left_empty = (i == 0) || (s[i - 1] == 0);
                bool right_empty = (i == len - 1) || (s[i + 1] == 0);
                if (left_empty && right_empty) {
                    s[i] = 1;
                    n--;
                }
            }
            if (n == 0) {
                return true;
            }
        }
        return (n == 0);
    }
};