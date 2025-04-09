# Problem          : 3375. Minimum Operations to Make Array Values Equal to K
# Time Complexity  : O(N)
# C++ / Python Solution

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> st;
        for (auto num : nums) {
            if (num < k) {
                return -1;
            } else if (num > k) {
                st.insert(num);
            }
        }
        return st.size();
    }
};