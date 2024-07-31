/*
    Problem link:
    Time Complexity: O(N)
    Space Complexity: O(N)
*/

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for (auto x : s) {
            if (x == '*') {
                st.pop();
            } else {
                st.push(x);
            }
        }
        string ans;
        while (!st.empty()) {
            char ch = st.top();
            ans += ch;
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Python Code:
class Solution:
    def removeStars(self, s: str) -> str:
        stack = []
        for ch in s:
            if ch == "*":
                stack and stack.pop()
            else:
                stack.append(ch)
                
        return "".join(stack)