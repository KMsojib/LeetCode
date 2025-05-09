# Problem          : 402. Remove K Digits
# Time Complexity  : 
# C++ / Python Solution

class Solution {
public:
    string removeKdigits(string num, int k) {
        if (k == num.size())
            return "0";

        int n = (int)num.size();
        stack<char> st;
        for (char ch : num) {
            while (!st.empty() && k > 0 && st.top() > ch) {
                st.pop();
                k--;
            }
            st.push(ch);
        }

        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        string res = "";
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        int i = 0;
        while (i < res.size() && res[i] == '0') {
            i++;
        }
        res = res.substr(i);
        return res.empty() ? "0" : res;
    }
};