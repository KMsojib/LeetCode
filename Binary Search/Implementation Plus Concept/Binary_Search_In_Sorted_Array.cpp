#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    // sort(array.begin(),array.end());
    int to_find;
    cin>>to_find;
    int left = 0, right = n-1, mid = 0;
    while(right - left > 1){
        mid = left + (right - left) / 2;;
        if(array[mid] < to_find){
            left = mid + 1;
        }else{
            right = mid;
        }
    }
    if(array[left] == to_find){
        cout<<left<<"\n";
    }
    else if(array[mid] == to_find){
        cout<<right<<"\n";
    }
    else{
        cout<<"Not found\n";
    }
    return 0;
}
