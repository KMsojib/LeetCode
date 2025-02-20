/*
# Problem          : 1980. Find Unique Binary String
# Time Complexity  : O(N^2)
# C++ Solution
*/

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = (int)nums.size();
        map<string, bool> mp;

        for (auto num : nums)
            mp[num] = true;

        string ans(nums[0].size(), '0');
        while (true) {
            if (mp.find(ans) == mp.end()) {
                return ans;
            } else {
                int i = n - 1;
                while (i >= 0 && ans[i] == '1') {
                    ans[i] = '0';
                    i--;
                }
                if (i >= 0) {
                    ans[i] = '1';
                } else {
                    return "";
                }
            }
        }
    }
};