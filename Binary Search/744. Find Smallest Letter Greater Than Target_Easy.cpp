class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto x = upper_bound(letters.begin(),letters.end(),target);
        if(x==letters.end()){
            return letters[0];
        }
        else{
            int idx = x-letters.begin();
            return letters[idx];
        }
    }
};