/*
# Problem          : 3206. Alternating Groups I
# Time Complexity  : O(N)
# C++ Solution
*/
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        colors.insert(colors.begin(), colors[colors.size() - 1]);
        colors.push_back(colors[1]);
        int AltrGrp = 0;
        int n = (int)colors.size();

        for (int i = 1; i < n - 1; i++) {
            if (colors[i - 1] == colors[i + 1] && colors[i] != colors[i - 1]) {
                AltrGrp += 1;
            }
        }

        return AltrGrp;
    }
};
