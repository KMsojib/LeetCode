// Day-1

#include<bits/stdc++.h>
using namespace std;

// O(n)
// string reversePrefix(string word, char ch) {
//     int idx = -1;
//     for(int i=0;i<word.size();i++){
//         if(word[i] == ch){
//             idx = i;
//             break;
//         }
//     }

//     if(idx == -1){
//         return word;
//     }
//     else{
//         string s;
//         for(int i=idx;i>=0;i--){
//             s+=word[i];
//         }
//         for(int i=idx+1;i<word.size();i++){
//             s+=word[i];
//         }
//         return s;
//     }
// }
string reversePrefix(string word, char ch) {
    int r = word.find(ch);
    if(r == -1){
        return word;
    }

    int idx = (r-1)/2;
    for(int i=0;i<=idx;i++){
        swap(word[i],word[r-i]);
    }
    return word;
}

int main()
{
    string s = "abcdefd";
    char ch = 'd';
    cout<<reversePrefix(s,ch)<<endl;
    return 0;
}
