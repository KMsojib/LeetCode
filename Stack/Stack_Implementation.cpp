#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    st.push(1); // push in stack using push operation
    st.push(2);
    st.push(3);

    while(!st.empty()){
        cout<<st.top()<<" "; // get top most element
        st.pop(); // remove top most element
    }

    return 0;
}