/* 
Problem : 290. Word Pattern
Time Complexity : O(N)
*/
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        istringstream iss(s);
        string word;
        while (iss >> word) {
            words.push_back(word);
        }
        if (pattern.size() != words.size()) {
            return false;
        }
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            string w = words[i];

            if (charToWord.count(c)) {
                if (charToWord[c] != w) {
                    return false;
                }
            } else {
                charToWord[c] = w;
            }

            if (wordToChar.count(w)) {
                if (wordToChar[w] != c) {
                    return false;
                }
            } else {
                wordToChar[w] = c;
            }
        }
        return true;
    }
};
