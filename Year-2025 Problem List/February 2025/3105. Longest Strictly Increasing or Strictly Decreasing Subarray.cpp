/*
# Problem          : 3105. Longest Strictly Increasing or Strictly Decreasing Subarray
# Time Complexity  : O(n)
# C++ Solution
*/
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& a) {
        int n = (int)a.size();
        int maxiLen = 1, currnLen = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                currnLen++;
            } else {
                maxiLen = max(maxiLen, currnLen);
                currnLen = 1;
            }
        }
        maxiLen = max(maxiLen, currnLen);
        currnLen = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] < a[i - 1]) {
                currnLen++;
            } else {
                maxiLen = max(maxiLen, currnLen);
                currnLen = 1;
            }
        }
        maxiLen = max(maxiLen, currnLen);

        return maxiLen;
    }
};