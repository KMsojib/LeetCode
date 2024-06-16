#include<bits/stdc++.h>
using namespace std;

int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
    int n = profits.size();
    vector<pair<int,int>>project;
    for(int i=0;i<n;i++){
        pair<int,int>x;
        x.first = capital[i];
        x.second = profits[i];
        project.push_back(x);
    }

    sort(project.begin(),project.end());
    priority_queue<int>maxheap;

    int i = 0;
    while(k--){
        while(i<n && project[i].first <= w){
            maxheap.push(project[i].second); 
            i++;
        }
        if(maxheap.empty()){
            break;
        }
        w += maxheap.top(); 
        maxheap.pop(); 
    }
    return w;
}


int main(){
    int k = 2,w = 0;
    vector<int>pro = {1,2,3};
    vector<int>cap = {0,1,1};
    int ans = findMaximizedCapital(k,w,pro,cap);
    cout<<ans<<endl;
    return 0;
}
