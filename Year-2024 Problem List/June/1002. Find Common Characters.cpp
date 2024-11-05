class Solution {
public:
    vector<string> commonChars(vector<string>& w) {
        string s = w[0];
        int l = 0;
        vector<string> ans;
        while (l < s.size()) {
            int cn = 1;
            for (int i = 1; i < w.size(); i++) {
                size_t found = w[i].find(s[l]);
                if (found != string::npos) {
                    w[i][found] = '.';
                    cn++;
                } else {
                    break;
                }
            }
            if (cn == w.size()) {
                cout << "ans :" << s[l] << endl;
                string x = "";
                x += s[l];
                ans.push_back(x);
                l++;
            } else {
                l++;
            }
        }
        return ans;
    }
};