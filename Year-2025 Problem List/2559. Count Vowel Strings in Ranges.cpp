/*
 # Problem          : 2559. Count Vowel Strings in Ranges
 # Time Complexity  : 
 # C++ Solution
 */

// Approach 1: Brute Force
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        map<char, bool> mp = {
            {'a', true},
            {'e', true},
            {'i', true},
            {'o', true},
            {'u', true}
        };

        int n = words.size();
        int m = queries.size();
        
        for (auto& query : queries) {
            int x = query[0];
            int y = query[1];
            int cn = 0;
            
            for (int i = x; i <= y; ++i) {
                string s = words[i];
                if (mp[s[0]] && mp[s[s.size() - 1]]) {
                    cn++;
                }
            }
            ans.push_back(cn);
        }
        return ans;
    }
};