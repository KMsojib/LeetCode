/*----------------------------------------  Sorting Aproach ----------------------------------------*/

// TC: O(nlogn)
// SC: O(1) No addition memory use, so it take O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t ? true : false);
    }
};

/*---------------------------------------------- Hashmap Aproach ----------------------------------------------*/

// TC: O(n)
// SC: O(n)

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    // Using map take 13 ms runtime
    map<char,int> freq_of_s;
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


int main()
{
    string s = "pnagram";
    string t = "nagaram";

    cout<<isAnagram(s,t);

    return 0;
}
/*-------------------------------------------------------------------------------------------------------------*/