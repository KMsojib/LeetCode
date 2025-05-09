# Problem          : 2587. Rearrange Array to Maximize Prefix Score
# Time Complexity  : O(n log n)
# Space Complexity : O(1)
# C++ / Python Solution

// Time Complexity : O(n log n) Space Complexity : O(n)
class Solution {
public:
    long long maxScore(vector<int>& nums) {
        long long n = (int)nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        vector<long long> pref(n, 0);

        pref[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + nums[i];
        }
        long long maxiScore = 0;
        for (auto prf : pref) {
            if (prf <= 0) {
                break;
            } else {
                maxiScore += 1;
            }
        }
        return maxiScore;
    }
};
// Runtime 45 ms Beats 33.70 % || Memory 93.94 MB Beats 15.22 %

// Aproach 2:

class Solution {
public:
    long long maxScore(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        long long maxiLen = 0, sum = 0;
        for (auto num : nums) {
            sum += num;
            if (sum > 0) {
                maxiLen++;
            } else {
                break;
            }
        }
        return maxiLen;
    }
};
// Time Complexity : O(n log n) but Space Complexity : O(1)