/*
# Problem          : 1760. Minimum Limit of Balls in a Bag
# Time Complexity: (O(n \log M))
# Space Complexity: (O(1))
# C++ Solution
*/
class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        auto CanAchive = [&](int maxSize) {
            int op = 0;
            for (int num : nums) {
                if (num > maxSize) {
                    op += (num - 1) / maxSize;
                }
            }
            return op <= maxOperations;
        };
        int left = 1, right = *max_element(nums.begin(), nums.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (CanAchive(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};