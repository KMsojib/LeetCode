/*
    # Problem          : 3042. Count Prefix and Suffix Pairs I
    # Time Complexity  : O(N^2)
    # C++ Solution
*/
// Brute Forces Solution 
class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int cnt = 0;
        auto checkPrefix = [](string str1, string str2) {
            return str2.substr(0, str1.size()) == str1;
        };
        auto checkSuffix = [](string str1, string str2) {
            return str2.substr(str2.size() - str1.size()) == str1;
        };

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                string s1 = words[i], s2 = words[j];
                if (s2.size() < s1.size()) {
                    continue;
                } else {
                    cnt += (checkPrefix(s1, s2) && checkSuffix(s1, s2));
                }
            }
        }
        return cnt;
    }
};