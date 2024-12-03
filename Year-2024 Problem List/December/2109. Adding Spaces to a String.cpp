/*
# Problem          : 2109. Adding Spaces to a String
# Time Complexity  : O(n+m)
# C++ Solution
*/
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = (int)s.size();
        int m = (int)spaces.size();
        int i = 0, j = 0;
        string ans = "";
        while(j<n){
            if (i < m && j == spaces[i]){
                ans += " ";
                i++; 
            }
            ans += s[j++];
        }
        return ans;
    }
};