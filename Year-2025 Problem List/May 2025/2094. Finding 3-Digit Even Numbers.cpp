# Problem          : 2094. Finding 3-Digit Even Numbers
# Time Complexity  : O(n^3)
# C++ / Python Solution

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        int n = d.size();
        vector<int> ans;
        set<int> st;

        for (int i = 0; i < n; i++) {
            if (d[i] == 0)
                continue;
            for (int j = 0; j < n; j++) {
                if (i == j)
                    continue;
                for (int k = 0; k < n; k++) {
                    if (i == k || j == k)
                        continue;
                    if (d[k] % 2 == 1)
                        continue;
                    int num = d[i] * 100 + d[j] * 10 + d[k];
                    st.insert(num);
                }
            }
        }
        for (int num : st) {
            ans.push_back(num);
        }

        return ans;
    }
};