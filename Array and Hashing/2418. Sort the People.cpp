class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> ans;
        int n = (int)names.size();
        for (int i = 0; i < n; i++) {
            ans.push_back({heights[i], names[i]});
        }
        sort(ans.begin(), ans.end(),
             [](const pair<int, string>& a, const pair<int, string>& b) {
                 if (a.first == b.first)
                     return a.second < b.second;
                 return a.first > b.first;
             });
        vector<string> res;
        for (auto[x,y] : ans) {
            res.push_back(y);
        }
        return res;
    }
};