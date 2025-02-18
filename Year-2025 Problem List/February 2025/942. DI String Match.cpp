class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = (int)s.size();
        vector<int> ans;
        int incr = 0, decr = n;

        for (auto ch : s) {
            if (ch == 'I') {
                ans.push_back(incr);
                incr += 1;
            } else {
                ans.push_back(decr);
                decr -= 1;
            }
        }
        ans.push_back(s[n - 1] == 'D' ? decr : incr);
        return ans;
    }
};
