/*Problem          : 209. Minimum Size Subarray Sum
# Time Complexity  : O(long(n))
# C++ Solution
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int l = 0, r = 0;
        int ans = INT_MAX;
        int crn_sum = 0;
        while (r < (int)a.size()) {
            crn_sum += a[r];
            while (crn_sum >= target) {
                ans = min(ans, r - l + 1);
                crn_sum -= a[l];
                l++;
            }
            r++;
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};
