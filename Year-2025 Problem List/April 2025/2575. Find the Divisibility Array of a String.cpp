# Problem          : 2575. Find the Divisibility Array of a String
# Time Complexity  : O(N)
# C++ / Python Solution

class Solution {
public:
    vector<int> divisibilityArray(string words, int m) {
        vector<int> div;

        long long rem = 0;
        int n = (int)words.size();
        for (auto word : words) {
            rem = (rem * 10 + (word - '0')) % m;
            if (rem == 0) {
                div.push_back(1);
            } else {
                div.push_back(0);
            }
        }
        return div;
    }
};