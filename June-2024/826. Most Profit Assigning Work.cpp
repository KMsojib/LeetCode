/*
    Problem link: 
    Type: Medium
    Topic: Binary search

*/

class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        int n = w.size();
        vector<pair<int, int>> profit;
        profit.push_back({0, 0});
        for (int i = 0; i < n; i++) {
            pair<int, int> x;
            x.first = d[i];
            x.second = p[i];
            profit.push_back(x);
        }

        sort(profit.begin(), profit.end());
        for (int i = 0; i < profit.size() - 1; i++) {
            profit[i + 1].second = max(profit[i].second, profit[i + 1].second);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int l = 0, r = profit.size() - 1;
            int maxo = 0;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (profit[mid].first <= w[i]) {
                    maxo = profit[mid].second;
                    l = mid + 1;
                } else if (profit[mid].first > w[i]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            ans += maxo;
        }
        return ans;
    }
};