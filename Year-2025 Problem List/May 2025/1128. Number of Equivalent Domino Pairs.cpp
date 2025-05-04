# Problem          : 1128. Number of Equivalent Domino Pairs
# Time Complexity  : O(n)
# Space Complexity : O(n)
# C++ / Python Solution

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int Eq_Domino = 0;
        map<vector<int>, int> mp;
        for (auto domino : dominoes) {
            sort(domino.begin(), domino.end());
            if (mp.find(domino) != mp.end()) {
                Eq_Domino += mp[domino];
            }
            mp[domino]++;
        }
        return Eq_Domino;
    }
};