/*
    problem link: https://leetcode.com/problems/is-subsequence/submissions/1288705814/
    Time complexity: O(N)
    Space Complexity: O(N)
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while(j<t.size()){
            if(s[i]==t[j]){
                i++,j++;
            }
            else{
                j++;
            }
        }
        if(i<s.size()){
            return false;
        }
        else{
            return true;
        }
    }
};