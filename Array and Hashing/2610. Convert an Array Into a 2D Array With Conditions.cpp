# Problem          : 2610. Convert an Array Into a 2D Array With Conditions

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int> mp;
        for (auto num : nums) {
            mp[num] += 1;
        }

        priority_queue<pair<int, int>> pq;
        for (auto [x, y] : mp) {
            pq.push({y, x});
        }

        vector<vector<int>> ans;
        while (!pq.empty()) {
            vector<int> temp;
            priority_queue<pair<int, int>> next_pq;
            while (!pq.empty()) {
                auto [x, y] = pq.top();
                pq.pop();
                temp.push_back(y);
                if (x > 1) {
                    next_pq.push({x - 1, y});
                }
            }
            ans.push_back(temp);
            pq = next_pq;
        }
        return ans;
    }
};
