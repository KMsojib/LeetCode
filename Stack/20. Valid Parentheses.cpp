/*
    problem link:
    Time Complexity: O(N)
    Space Complexity: O(N)
*/

class Solution {
public:
 unordered_map<char, int> symbol = {{'(', -1}, {'{', -2}, {'[', -3},{')', 1},  {'}', 2},  {']', 3}};
    bool isValid(string s) {
        stack<char> st;
        for (auto bracket : s) {
            if (symbol[bracket] < 0) {
                st.push(bracket);
            } else {
                if (st.empty())
                    return false;
                char ch = st.top();
                st.pop();
                if (symbol[ch] + symbol[bracket] != 0) {
                    return false;
                }
            }
        }
        return (st.empty() ? true : false);
    }
};