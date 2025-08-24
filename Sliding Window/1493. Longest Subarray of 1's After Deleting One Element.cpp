/*
# Problem          : 1493. Longest Subarray of 1's After Deleting One Element
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeroCount = 0;
        int subArray = 0;
        int start = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount += 1;
            }
            while (zeroCount > 1) {
                zeroCount -= (nums[start] == 0);
                start++;
            }
            subArray = max(subArray, i - start);
        }
        return subArray;
    }
};