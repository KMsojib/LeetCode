class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mp;
        for (auto x : deck) {
            mp[x]++;
        }
        int mini = INT_MAX;
        for (auto [x, y] : mp) {
            mini = min(mini, y);
        }
        if (mini <= 1) {
            return false;
        } else {
            int Gcd = 0;
            for (auto [x, y] : mp) {
                Gcd = gcd(Gcd, y);
            }
            return Gcd != 1;
        }
    }

};
