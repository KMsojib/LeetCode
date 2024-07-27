#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll vp[100005],n,m;
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>vp[i];
        vp[i] += vp[i-1];
    }
    cin>>m;
    while(m--){
        ll x;   cin>>x;
        cout<<lower_bound(vp,vp+n,x)-vp+1 <<endl;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;  //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 