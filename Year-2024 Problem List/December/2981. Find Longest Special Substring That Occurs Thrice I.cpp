class Solution {
public:
    int maximumLength(string s) {
        map<pair<char, int>, int> mp;
        int substringlength = 0;
        for (int start = 0; start < s.length(); start++) {
            char ch = s[start];
            substringlength = 0;
            for (int end = start; end < s.length(); end++) {
                if (ch == s[end]) {
                    substringlength++;
                    mp[{ch, substringlength}]++;
                } else {
                    break;
                }
            }
        }
        int ans = 0;
        for (auto i : mp) {
            int len = i.first.second;
            if (i.second >= 3 && len > ans)
                ans = len;
        }
        return ans == 0 ? -1 : ans;
    }
};