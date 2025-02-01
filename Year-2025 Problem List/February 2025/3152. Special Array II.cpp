# Problem          : 3152. Special Array II
# Time Complexity  : O(N)
# Space Complexity : O(N)
# C++ Solution

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums,
                                vector<vector<int>>& queries) {
        int n = (int)nums.size();
        vector<int> prefix(n, 0);

        for (int i = 0; i < n; i++) {
            nums[i] %= 2;
        }

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                prefix[i] = prefix[i - 1] + 1;
            } else {
                prefix[i] = prefix[i - 1];
            }
        }

        int q = (int)queries.size();
        vector<bool> ans(q, false);
        for (int i = 0; i < q; i++) {
            int x = queries[i][0];
            int y = queries[i][1];
            ans[i] = prefix[y] - prefix[x] == 0;
        }
        return ans;
    }
};