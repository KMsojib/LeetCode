/*
# Problem          : 1358. Number of Substrings Containing All Three Characters
# Time Complexity  : O(N)
# C++ Solution
*/

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int left = 0, right = 0;
        unordered_map<char, int> count;
        int result = 0;

        while (right < n) {
            count[s[right]]++;

            while (count['a'] > 0 && count['b'] > 0 && count['c'] > 0) {
                result += n - right;
                count[s[left]]--;
                left++;
            }
            right++;
        }
        return result;
    }
};