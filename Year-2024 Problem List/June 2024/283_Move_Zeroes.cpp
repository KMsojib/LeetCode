#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &a)
{
    int left = 0, right = 1;
    while (left < right){
        /* code */
        if(a[left]!=0){
            left++;
        }
        else if(a[right]==0){
            right++;
        }
        else if(a[right]!=0){
            swap(a[left++],a[right]);
        }

    }
    for(auto x : a){
        cout<<x<<" ";
    }
    
}
int main()
{
    vector<int> a = {0, 1, 0, 3, 12};
    moveZeroes(a);

    return 0;
}