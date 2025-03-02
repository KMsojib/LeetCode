/*
# Problem          : 2570. Merge Two 2D Arrays by Summing Values
# Time complexity: O((N1 + N2) log(N1 + N2))
# Space complexity : O(N1 + N2)
# CPP Solution
*/

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        map<int, int> mp;

        for (auto nums : nums1) {
            mp[nums[0]] = nums[1];
        }

        for (auto nums : nums2) {
            mp[nums[0]] += nums[1];
        }

        vector<vector<int>> ans;
        for (auto [x, y] : mp) {
            vector<int> temp = {x, y};
            ans.push_back(temp);
        }
        return ans;
    }
};
