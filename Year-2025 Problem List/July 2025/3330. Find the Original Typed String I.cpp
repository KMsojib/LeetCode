/*
# Problem          : 3330. Find the Original Typed String I
// One pass
// Time Complexity: O(n)
// Space Complexity : O(1)
*/
class Solution {
public:
    int possibleStringCount(string word) {
        int res = 1;
        int n = (int)word.size();
        for (int i = 1; i < n; i++) {
            if (word[i] == word[i - 1]) {
                res++;
            }
        }
        return res;
    }
};

// Brute Force
class Solution {
public:
    int possibleStringCount(string word) {
        int res = 1;
        int n = (int)word.size();
        int i = 0, j = 0;
        while (i < n) {
            char crn = word[i];
            j = i + 1;
            while (crn == word[j]) {
                res += 1;
                j++;
            }
            i = j;
        }
        return res;
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)
// Runtime 5 ms Beats 27.17 % || Memory 8.69 MB Beats 96.36 %