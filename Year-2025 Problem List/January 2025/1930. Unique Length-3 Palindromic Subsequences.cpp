/*
    # Problem          : https://leetcode.com/problems/unique-length-3-palindromic-subsequences/
    # Time Complexity  : O(N)
    # C++ Solution
*/

// Approach: Brute Force
// Time Complexity: O(^3)

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = (int)s.size();
        int Count = 0;
        auto Palindrom = [](string c) {
            string temp = c;
            reverse(temp.begin(), temp.end());
            return temp == c;
        };
        set<string> st;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    string x = "";
                    x.push_back(s[i]);
                    x.push_back(s[j]);
                    x.push_back(s[k]);
                    if (Palindrom(x)) {
                        st.insert(x);
                    }
                }
            }
        }
        return st.size();
    }
};

//Approach 2: Pre-Compute First and Last Indices
// Time Complexity: O(N)

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = (int)s.size();
        int Count = 0;
        vector<int> firstOccurrence(26, -1);
        vector<int> lastOccurrence(26, -1);

        for (int i = 0; i < n; i++) {
            int ch = s[i] - 'a';
            if (firstOccurrence[ch] == -1) {
                firstOccurrence[ch] = i;
            }
            lastOccurrence[ch] = i;
        }

        for (int i = 0; i < 26; i++) {
            if (firstOccurrence[i] != -1 &&
                firstOccurrence[i] < lastOccurrence[i]) {
                unordered_set<char> uniqueChar;
                for (int j = firstOccurrence[i] + 1; j < lastOccurrence[i];
                     j++) {
                    uniqueChar.insert(s[j]);
                }
                Count += uniqueChar.size();
            }
        }
        return Count;
    }
};