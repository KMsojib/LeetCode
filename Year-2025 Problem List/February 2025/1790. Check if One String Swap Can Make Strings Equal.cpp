/*
# Problem          : 1790. Check if One String Swap Can Make Strings Equal
# Time Complexity  : O(N)
# Space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();

        if (s1 == s2) {
            return true;
        }

        map<char, int> count_s1, count_s2;
        int diff_count = 0;

        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                diff_count++;
                if (diff_count > 2) {
                    return false;
                }
            }
            count_s1[s1[i]]++;
            count_s2[s2[i]]++;
        }

        if (count_s1 != count_s2) {
            return false;
        }

        return true;
    }
};