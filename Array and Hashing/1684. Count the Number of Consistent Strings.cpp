# Problem          : 1684. Count the Number of Consistent Strings
# Time Complexity  : O(n^2)
# C++ / Python Solution

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        unordered_set<char> allowedSet(allowed.begin(), allowed.end());

        for (const string& word : words) {
            bool isConsistent = true;
            for (char c : word) {
                if (allowedSet.find(c) == allowedSet.end()) {
                    isConsistent = false;
                    break;
                }
            }
            if (isConsistent) {
                cnt++;
            }
        }

        return cnt;
    }
};