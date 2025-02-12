/*
# Problem          : 2342. Max Sum of a Pair With Equal Sum of Digits
# Time Complexity  : O(N)
# Space Complexity: O(N)
# C++ Solution
*/
class Solution {
public:
    int digit_sum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int maxi = -1;
        int n = (int)nums.size();
        unordered_map<int, int> digitSumMap;

        for (auto num : nums) {
            int sum = digit_sum(num);

            if (digitSumMap.find(sum) != digitSumMap.end()) {
                maxi = max(maxi, digitSumMap[sum] + num);
            }

            digitSumMap[sum] = max(digitSumMap[sum], num);
        }
        return maxi;
    }
};
