class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for (auto& word : words) {
            mp[word]++;
        }

        vector<pair<int, string>> ans;
        for (auto& [word, freq] : mp) {
            ans.push_back({freq, word});
        }

        sort(ans.begin(), ans.end(),
             [](const pair<int, string>& a, const pair<int, string>& b) {
                 if (a.first == b.first)
                     return a.second < b.second;
                 return a.first > b.first;
             });

        vector<string> vp;
        for (int i = 0; i < k; ++i) {
            vp.push_back(ans[i].second);
        }

        return vp;
    }
};
