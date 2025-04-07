# Problem          : 3120. Count the Number of Special Characters I
# Time Complexity  : O(N)
# C++ / Python Solution

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> small;
        unordered_set<char> capital;

        for (char ch : word) {
            if (ch >= 'a' && ch <= 'z') {
                small.insert(ch);
            } else if (ch >= 'A' && ch <= 'Z') {
                capital.insert(ch);
            }
        }

        int count = 0;
        for (char c : small) {
            if (capital.count(toupper(c))) {
                count++;
            }
        }

        return count;
    }
};