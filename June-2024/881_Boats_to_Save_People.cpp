#include<bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
    int cn = 0;
    sort(people.begin(),people.end());
    int n = people.size();

    int l=0, r = n-1;
    while(l<=r){
        if(people[l]+people[r] <= limit){
            cn++;
            l++,r--;
        }
        else if(people[r]<=limit){
            r--;
            cn++;
        }
    }
    return cn;
}
int main()
{   

    vector<int> a ={3,2,2,1};
    // 1 2 2 3
    int limit = 3;
    int res = numRescueBoats(a,limit);
    cout<<res<<endl;
    return 0;
}
