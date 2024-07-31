#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>symbol = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
string isBalanced(string s){
    stack<char>st;
    for(auto bracket : s){
        if(symbol[bracket] < 0){
            st.push(bracket);
        }else{
            if(st.empty())  return "NO";
            char ch = st.top();
            st.pop();
            if(symbol[ch] + symbol[bracket] != 0){
                return "NO";
            }
        }
    }
    return (st.empty() ? "YES" : "NO");
}

int main(){
    int t;  cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    return 0;
}
