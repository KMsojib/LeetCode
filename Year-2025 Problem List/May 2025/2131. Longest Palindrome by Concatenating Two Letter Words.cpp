# Problem          : 2131. Longest Palindrome by Concatenating Two Letter Words
# Time Complexity  : O(n)
# Space Complexity : O(26)
# C++ / Python Solution

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int pairCount = 0;
        int freq[26][26];

        for (auto word : words) {
            int first = word[0] - 'a';
            int second = word[1] - 'a';

            if (freq[second][first] > 0) {
                pairCount += 4;
                freq[second][first]--;
            } else {
                freq[first][second]++;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i][i] > 0) {
                pairCount += 2;
                break;
            }
        }
        return pairCount;
    }
};