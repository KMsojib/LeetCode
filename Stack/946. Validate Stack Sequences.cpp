# Problem          : 946. Validate Stack Sequences
# Time Complexity  : O(n log n)
# C++ / Python Solution

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;

        int popp = 0;
        for (int pus = 0; pus < (int)pushed.size(); pus++) {
            st.push(pushed[pus]);
            while (!st.empty() && st.top() == popped[popp]) {
                st.pop();
                popp++;
            }
        }
        return st.empty() ? true : false;
    }
};