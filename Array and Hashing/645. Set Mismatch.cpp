# Problem          : 645. Set Mismatch
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> mp(nums.size() + 1, 0);
        for (int i = 0; i < (int)nums.size(); i++) {
            mp[nums[i]] += 1;
        }

        vector<int> res(2, 0);
        for (int i = 1; i < (int)mp.size(); i++) {
            if (mp[i] == 2) {
                res[0] = i;
            } else if (mp[i] == 0) {
                res[1] = i;
                ;
            }
        }
        return res;
    }
};