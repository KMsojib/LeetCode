/*
# Problem          : 3146. Permutation Difference between Two Strings
# Time Complexity  : O(n)
# C++ Solution
*/

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int>mp;
        for(int i=0;i<(int)s.size();i++){
            mp[s[i]] = i+1;
        }
        int sum = 0;
        for(int i=0;i<(int)t.size();i++){
            sum += abs(mp[t[i]] - (i+1));
        }
        return sum;
    }
};