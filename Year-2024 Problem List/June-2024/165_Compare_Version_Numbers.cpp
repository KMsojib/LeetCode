int compareVersion(string version1, string version2) {
    int x1 = 0,x2 = 0;
    for(int i=0, j=0; i<version1.size() || j<version2.size(); i++,j++){
        while(i<version1.size() && version1[i]!='.'){
            x1 = 10*x1 + (version1[i++] - '0');
        }

        while(j<version2.size() && version2[j]!='.'){
            x2 = 10*x2 + (version2[j++] - '0');
        }

        if(x1 > x2){
            return 1;
        }
        else if(x1 < x2){
            return -1;
        }
        x1=0,x2=0;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    cin>>x>>x;
    cout<<compareVersion(s,x)<<endl;
    return 0;
}
