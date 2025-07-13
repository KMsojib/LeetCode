/*
# Problem          : 2410. Maximum Matching of Players With Trainers
# Time Complexity  : O(n log n)
# space Complexity : O(1)
# C++ Solution
*/
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int cnt = 0;
        int i = 0, j = 0;
        int n = (int)players.size(), m = trainers.size();

        sort(players.begin(), players.end(), greater<int>());
        sort(trainers.begin(), trainers.end(), greater<int>());

        while (i < n && j < m) {
            if (players[i] <= trainers[j]) {
                cnt++;
                i++, j++;
            } else {
                i++;
            }
        }
        return cnt;
    }
};
