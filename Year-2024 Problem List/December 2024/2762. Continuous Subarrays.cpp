/*
# Problem          : 2762. Continuous Subarrays
# Time Complexity  : O(nlogk)
# C++ Solution
*/
/**
 * This code computes the total number of continuous subarrays in the given nums array
 * such that the difference between the maximum and minimum elements of each subarray is at most 2.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;
        int l = 0;
        multiset<int> st;
        for (int r = 0; r < n; r++) {
            st.insert(nums[r]);
            while (*st.rbegin() - *st.begin() > 2) {
                st.erase(st.find(nums[l]));
                l++;
            }
            count += r - l + 1;
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {5, 4, 2, 4};
    long long result = solution.continuousSubarrays(nums);
    cout << "Number of continuous subarrays: " << result << endl;

    return 0;
}

/*-------------------------------------------------ChatGpt Explanation-------------------------------------------------*/
/**
 * This code computes the total number of continuous subarrays in the given nums array
 * such that the difference between the maximum and minimum elements of each subarray is at most 2.
 * 
 * Explanation of the Code:
 * 
 * Initialization:
 * - `n`: The size of the array `nums`.
 * - `count`: To store the total count of valid subarrays.
 * - `l`: The left pointer for the sliding window.
 * - `st`: A multiset to efficiently maintain the elements of the current window.
 * 
 * Sliding Window Technique:
 * - The sliding window expands to the right (`r`) and contracts from the left (`l`) to maintain the condition:
 *   max(window) - min(window) <= 2.
 * 
 * Why Sliding Window?
 * - The sliding window technique allows us to efficiently count valid subarrays without explicitly generating all subarrays (which would be computationally expensive).
 * - Instead of starting a new subarray for every possible starting index, we expand and shrink the current window to include all valid subarrays ending at `r`.
 * 
 * Why Multiset?
 * - The multiset is used to:
 *   1. Keep track of the elements in the current window.
 *   2. Quickly access the maximum (*st.rbegin()) and minimum (*st.begin()) values in O(logk), where `k` is the number of elements in the window.
 * 
 * Iteration:
 * - For each `r` (right pointer):
 *   1. Add `nums[r]` to the multiset.
 *   2. Check if the condition *st.rbegin() - *st.begin() > 2 is violated:
 *      - If yes, shrink the window from the left (`l++`) until the condition is satisfied.
 *   3. Add the number of valid subarrays ending at `r` to `count`. This is given by the number of elements in the current window:
 *      Number of valid subarrays ending at r = r - l + 1.
 * 
 * Return:
 * - Finally, return `count`, which accumulates the total number of valid subarrays.
 * 
 * Step-by-Step Execution for Input [5, 4, 2, 4]:
 * 
 * Initial State:
 * - n = 4, count = 0, l = 0, st = {}
 * 
 * Iteration 1 (r = 0):
 * - Add nums[0] = 5 to st: st = {5}
 * - Condition: *st.rbegin() - *st.begin() = 5 - 5 = 0 <= 2, valid.
 * - Add r - l + 1 = 0 - 0 + 1 = 1 to count: count = 1.
 * 
 * Iteration 2 (r = 1):
 * - Add nums[1] = 4 to st: st = {4, 5}
 * - Condition: *st.rbegin() - *st.begin() = 5 - 4 = 1 <= 2, valid.
 * - Add r - l + 1 = 1 - 0 + 1 = 2 to count: count = 3.
 * 
 * Iteration 3 (r = 2):
 * - Add nums[2] = 2 to st: st = {2, 4, 5}
 * - Condition: *st.rbegin() - *st.begin() = 5 - 2 = 3 > 2, invalid.
 * - Shrink the window:
 *   - Remove nums[0] = 5 from st: st = {2, 4}, l = 1.
 *   - Condition is now valid: *st.rbegin() - *st.begin() = 4 - 2 = 2 <= 2.
 * - Add r - l + 1 = 2 - 1 + 1 = 2 to count: count = 5.
 * 
 * Iteration 4 (r = 3):
 * - Add nums[3] = 4 to st: st = {2, 4, 4}
 * - Condition: *st.rbegin() - *st.begin() = 4 - 2 = 2 <= 2, valid.
 * - Add r - l + 1 = 3 - 1 + 1 = 3 to count: count = 8.
 * 
 * Final Result:
 * - The total count of valid subarrays is 8.
 * 
 * Complexity:
 * - Time Complexity: O(nlogk), where `k` is the size of the sliding window (at most `n`).
 * - Space Complexity: O(k), where `k` is the size of the multiset.
 */