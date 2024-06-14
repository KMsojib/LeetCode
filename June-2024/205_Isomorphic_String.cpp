#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    vector<int>count_of_S(26,0),count_of_T(26,0);

    for(int i=0;i<s.size();i++){
        count_of_S[s[i]-97]++;
        count_of_T[t[i]-97]++;
    }

    bool f = true;
    for(int i=0;i<26;i++){
        if(count_of_S[i]!=count_of_T[i]){
            f=false;
            break;
        }
    }
    return f;

}

int main()
{
    string s = "egg";
    string t = "add";

    if(isIsomorphic(s,t)){
        cout<<"Milce\n";
    }
    else{
        cout<<"Mile nai\n";
    }
    return 0;
}
/*

Example 1:

Input: s = "egg", t = "add"
Output: true

e-->1   1-->a
g-->2   2-->d

vector<int>a(26,0);
vector<int>b(26,0);



Example 2:

Input: s = "foo", t = "bar"
Output: false


Example 3:

Input: s = "paper", t = "title"
Output: true
 
*/