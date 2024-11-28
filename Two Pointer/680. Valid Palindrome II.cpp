class Solution {
public:
    bool is_palindrome(string s, int i, int j){
        while(i<j){
            if(s.at(i) == s.at(j)){
                i++,j--;
            }
            else{
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i=0,j = s.size()-1;
        while(i<j){
            if(s.at(i) == s.at(j)){
                i++,j--;
            }
            else{
                return is_palindrome(s,i+1,j) or is_palindrome(s,i,j-1);
            }
        }
        return true;
    }
};