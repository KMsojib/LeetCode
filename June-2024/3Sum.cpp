#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        vector<vector<int>>vp;
        
        
        for(int i=0;i<n;i++){
            if(i>0 && a[i]==a[i-1]){
                continue;
            }

            int l = i+1,r = n-1;
            while(l<r){
                int total = a[i]+a[l]+a[r];
                if(total>0){
                    r--;
                }
                else if(total<0){
                    l++;
                }
                else{
                    vp.push_back({a[i],a[l],a[r]});
                    l++;
                    while(a[l] == a[l-1] && l<r){
                        l++;
                    }
                }
            }
        }
        return vp;
    }
};


int main(){

}

/*
    Time complexity: O(log n) * O(N^2)
    overall complexity : O(N^2)
    Space complexity: O(1)

*/