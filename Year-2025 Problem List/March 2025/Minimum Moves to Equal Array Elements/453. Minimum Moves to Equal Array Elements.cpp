# Problem          : 453. Minimum Moves to Equal Array Elements
# Time Complexity  : O(N)
# C++ Solution

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = (int)nums.size(), sum = 0, mini = INT_MAX;
        for (auto num : nums) {
            mini = min(num, mini);
            sum += num;
        }
        return sum - n * mini;
    }
};