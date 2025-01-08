/*
# Problem          : 2554. Maximum Number of Integers to Choose From a Range I
# Time Complexity  : O(m)+O(n)=O(m+n)
# C++ Solution
*/

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>st(banned.begin(), banned.end());
        int sumOf = 0, crnIdx = 0;
        int i = 1;
        while (i <= n && sumOf + i <= maxSum) {
            if(st.find(i) == st.end()){
                sumOf += i;
                crnIdx ++;
            }
            i++;
        }
        return crnIdx;
    }
};
