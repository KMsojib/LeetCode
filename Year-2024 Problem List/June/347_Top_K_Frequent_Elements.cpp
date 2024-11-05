// https://leetcode.com/problems/top-k-frequent-elements/description/




#include<bits/stdc++.h>
using namespace std;
struct cmp {
    bool operator()(pair<int,int> a, pair<int,int>b){
        return a.second < b.second;
    }
};

vector<int> topKFrequent(vector<int>& nums, int k) {
    map <int,int> mp;
    for(auto x : nums){
        mp[x]++;
    }

   priority_queue<pair<int,int>,vector<pair<int,int>>cmp>pq;

}

int main()
{
    vector<int>nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> ans = topKFrequent(nums,k);
    return 0;
}

/*

class Solution {
public:
    struct cmp {
        bool operator()(pair<int,int> a, pair<int,int>b){
            return a.second < b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        vector<int>ans;
        priority_queue< pair<int,int>,vector<pair<int,int>>,cmp >pq;
        for(auto x:m){
            pq.push({x.first,x.second});
        }
        for(int i=1;i<=k;i++){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};
*/