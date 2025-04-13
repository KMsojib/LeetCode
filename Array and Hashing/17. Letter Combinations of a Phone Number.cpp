class Solution {
public:
    vector<string> letterCombinations(string s) {
        map<int, string> mp{{2, "abc"}, {3, "def"},  {4, "ghi"}, {5, "jkl"},
                            {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};

        vector<string> res;

        function<void(int, string)> backtrack = [&](int i, string curStr) {
            if (curStr.size() == s.size()) {
                res.push_back(curStr);
                return;
            }
            for (auto ch : mp[s[i] - '0']) {
                backtrack(i + 1, curStr + ch);
            }
        };

        if (!s.empty()) {
            backtrack(0, "");
        }
        return res;
    }
};