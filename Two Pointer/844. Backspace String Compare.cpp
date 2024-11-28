/*
# Problem          : 844. Backspace String Compare
# Time Complexity  : 
# C++ Solution
*/
class Solution {
public:
    string processString(const string &str) {
        stack<char> st;
        for (char x : str) {
            if (x == '#') {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(x);
            }
        }
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }

    bool backspaceCompare(string s, string t) {
        return processString(s) == processString(t);
    }
};
