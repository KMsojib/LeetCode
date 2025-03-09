/*
# Problem          : 3208. Alternating Groups II
# Time Complexity  : O(N)
# C++ Solution
*/
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        for (int i = 0; i < k - 1; i++) {
            colors.push_back(colors[i]);
        }

        int len = colors.size(), result = 0;
        int left = 0, right = 1;

        while (right < len) {
            if (colors[right] == colors[right - 1]) {
                left = right;
                right += 1;
                continue;
            }

            right += 1;

            if (right - left < k) {
                continue;
            }

            result += 1;
            left += 1;
        }
        return result;
    }
};