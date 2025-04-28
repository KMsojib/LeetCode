# Problem          : 713. Subarray Product Less Than K
# Time Complexity  : O(N ^ 2) for brute force, O(N) for sliding window
# C++ / Python Solution



/*
    BruteForces Solution: Runtime 1423 ms Beats 8.75 % || Memory 65.25 MB Beats 32.63 %
*/


class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = (int)nums.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            long long mul = 1;
            for (int j = i; j < n; j++) {
                mul *= nums[j];
                if (mul < k) {
                    cnt++;
                } else {
                    break;
                }
            }
        }
        return cnt;
    }
};

/*
    Sliding Window : Runtime 3 ms Beats 50.88 % || Memory 65.06 MB Beats 95.11 %
*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1)
            return 0;

        int n = (int)nums.size();
        int cnt = 0;
        long long mul = 1;

        for (int left = 0, right = 0; right < n; right++) {
            mul *= nums[right];
            while (mul >= k) {
                mul /= nums[left++];
            }
            cnt += (right - left + 1);
        }

        return cnt;
    }
};
