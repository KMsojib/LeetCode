class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<int, int> mp;
        for (auto tex : text) {
            mp[tex]++;
        }
        int b = mp['b'];
        int a = mp['a'];
        int l = mp['l'] / 2;
        int o = mp['o'] / 2;
        int n = mp['n'];

        return min({b, a, l, o, n});
    }
};