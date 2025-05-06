# Problem          : 1487. Making File Names Unique
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        map<string, int> mp;
        vector<string> ans;
        for (auto name : names) {
            string val = name;
            int cnt = mp[val];

            while (mp[val] != 0) {
                val = name + '(' + to_string(cnt) + ')';
                cnt++;
                mp[name] = cnt;
            }
            mp[val]++;
            ans.emplace_back(val);
        }
        return ans;
    }
};