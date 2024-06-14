class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        map<string, int> mp;
        for (auto& it : dictionary) {
            mp[it] = 1;
        }

        string ans = "";
        string crn = "";
        bool ok = false;

        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                if (ok == false) {
                    ans += crn;
                    ans += " ";
                }
                crn = "";
                ok = false;
            } else {
                crn += sentence[i];
                if (mp[crn] == 1 && ok == false) {
                    ans += crn;
                    ans += " ";
                    ok = true;
                }
            }
        }
        if (!ok) {
            ans += crn;
        } else {
            ans.pop_back();
        }
        return ans;
    }
};