/*
 # Problem          : 2559. Count Vowel Strings in Ranges
 # Time Complexity: : (O(n + m))
 # Space Complexity : (O(n + m))
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

// Approach 2: Prefix Sum
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> pref(words.size(), 0);
        auto vowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        for (int i = 0; i < (int)words.size(); i++) {
            string s = words[i];
            if (vowel(s[0]) && vowel(s[(int)s.size() - 1])) {
                pref[i] = 1;
            }
        }
        for (int i = 1; i < (int)words.size(); i++) {
            pref[i] += pref[i - 1];
        }
        for (const auto& q : queries) {
            int l = q[0];
            int r = q[1];
            if (l - 1 >= 0) {
                ans.push_back(pref[r] - pref[l - 1]);
            } else {
                ans.push_back(pref[r]);
            }
        }
        return ans;
    }
};
