/*
# Problem          : 2616. Minimize the Maximum Difference of Pairs
# Time Complexity  : O(n⋅logV+n⋅logn)
# space Complexity : O(n)
# C++ Solution
*/

class Solution {
private:
    bool isValid(int threshold, int n, vector<int>& nums, int p) {
        int cnt = 0;
        for (int i = 0; i < n - 1;) {
            if (abs(nums[i] - nums[i + 1]) <= threshold) {
                cnt++;
                i += 2;
            } else {
                i += 1;
            }
            if (cnt >= p)
                return true;
        }
        return false;
    }

public:
    int minimizeMax(vector<int>& nums, int p) {
        int n = nums.size();
        if (p == 0)
            return 0;

        sort(nums.begin(), nums.end());

        int l = 0, r = nums[n - 1] - nums[0];
        int res = r;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (isValid(mid, n, nums, p)) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }
};