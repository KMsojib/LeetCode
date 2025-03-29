#include<bits/stdc++.h>
using namespace std;

vector<int>NGE(vector<int>v,int n){
    vector<int>nge(n);
    stack<int>st;
    for(int i=0; i<n; i++){ // O(n)
        while(!st.empty() && v[i]>v[st.top()]){ // stack.size()
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){ // stack.size()
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main(){
    int n;  cin>>n;
    vector<int>vp(n);
    for(int i=0;i<n;i++){
        cin>>vp[i];
    }
    sort(vp.begin(),vp.end());
    vector<int>nge = NGE(vp,n);
    for(int i=0; i<n; i++){
        cout<<vp[i] << " " << (nge[i] == -1 ? -1 : vp[nge[i]])<<endl;
    }
    return 0;
}