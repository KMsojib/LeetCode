/*
    # Problem          : 2270. Number of Ways to Split Array
    # Time Complexity  : O(N)
    # Space Complexity : O(1)
    # C++ Solution
*/
// Prefix Sum Approach Using O(N) Space and O(N) Time
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = (int)nums.size();
        int Count = 0;
        vector<long long> pref(n, 0);

        pref[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + nums[i];
        }

        for (int i = 0; i < n - 1; i++) {
            long long leftSum = pref[i];
            long long rightSum = pref[n - 1] - pref[i];
            if (leftSum >= rightSum) {
                Count++;
            }
        }
        return Count;
    }
};

// Approach 2: Optimized Prefix and Suffix Sums Using O(1) Space and O(N) Time
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = (int)nums.size();
        int Count = 0;
        long long leftSum = 0, rightSum = 0;
        for (int num : nums) {
            rightSum += num;
        }
        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i];
            rightSum -= nums[i];
            if (leftSum >= rightSum) {
                Count++;
            }
        }
        return Count;
    }
};


