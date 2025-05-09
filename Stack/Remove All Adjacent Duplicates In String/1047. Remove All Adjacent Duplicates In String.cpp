# Problem          : 1047. Remove All Adjacent Duplicates In String
# Time Complexity  : O(N)
# Space Complexity : O(N)
# C++ / Python Solution

======================================================= C++ =======================================================
class Solution {
public:
    string removeDuplicates(string s) {
        int n = (int)s.size();
        stack<char> st;
        for (auto ch : s) {
            if (!st.empty() && ch == st.top()) {
                while (!st.empty() && ch == st.top()) {
                    st.pop();
                }
            } else {
                st.push(ch);
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


======================================================== Python =======================================================
class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack = []
        for char in s:
            if stack and stack[-1] == char:
                stack.pop()
            else:
                stack.append(char)
        return ''.join(stack)