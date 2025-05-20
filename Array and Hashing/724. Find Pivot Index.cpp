# Problem          : 724. Find Pivot Index
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> leftPref(n, 0), rightSuf(n, 0);
        leftPref[0] = nums[0];
        for (int i = 1; i < n; i++) {
            leftPref[i] = leftPref[i - 1] + nums[i];
        }

        rightSuf[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightSuf[i] = rightSuf[i + 1] + nums[i];
        }

        for (int i = 0; i < n; i++) {
            if (leftPref[i] == rightSuf[i]) {
                return i;
            }
        }
        return -1;
    }
};