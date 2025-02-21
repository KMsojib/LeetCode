/*
# Problem          : 220. Contains Duplicate III
# Time Complexity  : O(nlog indexDiff)
# C++ Solution
*/

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        map<long long, int> mp;  // Use long long to handle overflow
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            auto it = mp.lower_bound((long long)nums[i] - valueDiff);
            while (it != mp.end() && it->first <= (long long)nums[i] + valueDiff) {
                if (abs(i - it->second) <= indexDiff) {
                    return true;
                }
                ++it;
            }
            mp[(long long)nums[i]] = i;
            if (mp.size() > indexDiff) {
                mp.erase((long long)nums[i - indexDiff]);
            }
        }
        return false;
    }
};

