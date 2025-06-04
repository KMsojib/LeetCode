# Problem          : 3403. Find the Lexicographically Largest String From the Box I
# Time Complexity  : O(n^2)
# C++ / Python Solution

class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends == 1) {
            return word;
        }
        int n = word.size();
        string res;
        for (int i = 0; i < n; i++) {
            res = max(res, word.substr(i, min(n - numFriends + 1, n - i)));
        }
        return res;
    }
};