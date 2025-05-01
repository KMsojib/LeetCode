# Problem          : 524. Longest Word in Dictionary through Deleting
# Time Complexity  : O(n^2)
# C++ / Python Solution

class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string longest = "";

        for (auto dict : dictionary) {
            int i = 0, j = 0;
            while (i < s.size() && j < dict.size()) {
                if (s[i] == dict[j]) {
                    j++;
                }
                i++;
            }

            if (j == dict.size()) {
                if (dict.size() > longest.size() ||
                    (dict.size() == longest.size() && dict < longest)) {
                    longest = dict;
                }
            }
        }
        return longest;
    }
};