/*
# Problem          : 1524. Number of Sub-arrays With Odd Sum
# Time Complexity  : O(N)
# C++ Solution
*/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = (int)arr.size();
        int oddCount = 0, evenCount = 0, crnSum = 0, cnt = 0;

        for (auto ar : arr) {
            crnSum += ar;
            if (crnSum % 2) {
                cnt = (cnt + 1 + evenCount) % 1000000007;
                oddCount += 1;
            } else {
                cnt += oddCount;
                evenCount += 1;
            }
        }
        return cnt;
    }
};