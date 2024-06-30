class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string x = strs[i];
            sort(x.begin(),x.end());
            mp[x].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto [x,y] : mp)
        {
            ans.push_back(y);
        }
        return ans;
    }
};
/*TC: O(nklogk) */