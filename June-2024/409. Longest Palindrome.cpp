class Solution {
public:
    int longestPalindrome(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);

        map<char,int>mp;
        for(auto x : s){
            mp[x]++;
        }
        int size =  0, odd = 0;
        for(auto [x,y] :  mp){
            if(y%2==0){
                size += y;
            }
            else{
                odd = max(odd,y);
            }
        }
        return size + odd;
    }
};
