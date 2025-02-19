/*
# Problem          : 1282. Group the People Given the Group Size They Belong To
# Time Complexity  : O(N)
# C++ Solution
*/

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = (int)groupSizes.size();
        map<int, vector<int>> HashMap;

        for (int i = 0; i < n; i++) {
            HashMap[groupSizes[i]].push_back(i);
        }

        std::vector<std::vector<int>> result;
        for (auto& [size, group] : HashMap) {
            for (int i = 0; i < group.size(); i += size) {
                result.push_back(std::vector<int>(group.begin() + i,group.begin() + i + size));
            }
        }
        return result;
    }
};
