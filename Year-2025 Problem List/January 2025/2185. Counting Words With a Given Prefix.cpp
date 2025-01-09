/*
    # Problem          : 2185. Counting Words With a Given Prefix
    # Time Complexity  : O(N*M)
    # C++ Solution
*/

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = (int)words.size(), m = (int)pref.size();
        int Count = 0;
        for (int i = 0; i < n; i++) {
            if (words[i].size() >= m &&
                strncmp(words[i].c_str(), pref.c_str(), m) == 0) {
                Count++;
            }
        }
        return Count;
    }
};