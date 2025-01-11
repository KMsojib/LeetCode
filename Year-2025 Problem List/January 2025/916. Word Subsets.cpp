/*
# Problem          :  916. Word Subsets
# Time Complexity  : 
# C++ Solution
*/

class Solution {
public:
    vector<int> Count(const string& s) {
        vector<int> ans(26, 0);
        for (char ch : s) {
            ans[ch - 'a'] += 1;
        }
        return ans;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> bMax(26, 0);
        for (const string& b : words2) {
            vector<int> bCount = Count(b);
            for (int i = 0; i < 26; i++) {
                bMax[i] = max(bMax[i], bCount[i]);
            }
        }

        vector<string> ans;
        for (const string& a : words1) {
            vector<int> aCount = Count(a);
            bool isSubset = true;
            for (int i = 0; i < 26; i++) {
                if (aCount[i] < bMax[i]) {
                    isSubset = false;
                    break;
                }
            }

            if (isSubset)
                ans.push_back(a);
        }
        return ans;
    }
};