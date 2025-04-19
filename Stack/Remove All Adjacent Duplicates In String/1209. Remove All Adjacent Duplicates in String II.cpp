# Problem          : 1209. Remove All Adjacent Duplicates in String II
# Time Complexity : O(N)
# Space Complexity : O(N)
# C++ / Python Solution

# ======================================================= C++ =======================================================
class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = (int)s.size();
        stack<pair<char, int>> st;

        for (char ch : s) {
            if (!st.empty() && st.top().first == ch) {
                st.top().second++;
                if (st.top().second == k) {
                    st.pop();
                }
            } else {
                st.push({ch, 1});
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans.append(st.top().second, st.top().first);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
