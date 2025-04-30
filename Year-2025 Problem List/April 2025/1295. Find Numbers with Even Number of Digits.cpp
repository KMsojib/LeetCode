# Problem          : 1295. Find Numbers with Even Number of Digits
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (auto num : nums) {
            string s = to_string(num);
            if (s.size() % 2 == 0) {
                cnt += 1;
            }
        }
        return cnt;
    }
};