/*
# Problem          : 3160. Find the Number of Distinct Colors Among the Balls
# Time Complexity  : O(N)
# Space Complexity : O(N)
# C++ Solution
*/

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = (int)queries.size();

        vector<int> res;
        unordered_map<int, int> colMap;
        unordered_map<int, int> revMap;

        for (auto it : queries) {
            int x = it[0];
            int y = it[1];

            int colrX = colMap[x];
            if (revMap.find(colrX) != revMap.end()) {
                revMap[colrX]--;

                if (revMap[colrX] == 0) {
                    revMap.erase(colrX);
                }
            }

            revMap[y]++;
            colMap[x] = y;
            res.push_back(revMap.size());
        }
        return res;
    }
};