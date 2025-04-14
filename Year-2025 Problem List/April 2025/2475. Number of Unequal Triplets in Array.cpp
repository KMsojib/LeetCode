# Problem          : 2475. Number of Unequal Triplets in Array
# Time Complexity  : O(N^3)
# C++ / Python Solution

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = (int)nums.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (i < j && j < k) {
                        if (nums[i] != nums[j] && nums[i] != nums[k] &&
                            nums[j] != nums[k]) {
                            cnt += 1;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};