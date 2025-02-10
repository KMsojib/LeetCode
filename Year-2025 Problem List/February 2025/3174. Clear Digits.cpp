/*
# Problem          : 3174. Clear Digits
# Time Complexity  : O(N)
# C++ Solution
*/

class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;

        for (auto ch : s) {
            if (ch >= 'a' && ch <= 'z') {
                st.push(ch);
            } else {
                if (!st.empty()) {
                    st.pop();
                }
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};