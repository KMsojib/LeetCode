#include<bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int>& nums) {
    int n = nums.size();
    map<int,int>hash_table;
    for(auto x : nums){
        hash_table[x]++;
    }

    vector<int>ans;
    for(auto [x,y] : hash_table){
        while(y){
            ans.push_back(x);
            y--;
        }
    }
    return ans;
}

int main()
{
    vector<int>num = {5,1,1,2,0,0};
    vector<int>ans = sortArray(num);
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<endl;
   
}