/*  problem link: https://leetcode.com/problems/valid-anagram/description/
    Time complexity: O(N)
    Space Complexity: O(N)
*/
class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> freq_of_s;
        for(char x : s){
            freq_of_s[x]++;
        }  

        sort(t.begin(),t.end());
        for(auto y : t){
            freq_of_s[y]--;
        }

        for(auto it : freq_of_s){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};