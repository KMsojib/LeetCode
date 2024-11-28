/*
# Problem          : 1662. Check If Two String Arrays are Equivalent
# Time Complexity  : 
# Python Solution
*/
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s = "",s2 = "";
        for(auto ch : word1){
            s += ch;
        }
        for(auto ch : word2){
            s2 += ch;
        }
        return s == s2 ? true : false;
    }
};