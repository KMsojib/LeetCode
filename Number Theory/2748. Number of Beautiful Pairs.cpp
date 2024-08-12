class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n = (int)nums.size();
        int cn = 0;
        for (int i = 0; i < n - 1; i++) {
            string s = to_string(nums[i]);
            int first = s[0] - '0';
            for (int j = i + 1; j < n; j++) {
                int second = (nums[j] >= 10 ? nums[j] % 10 : nums[j]);
                if (__gcd(first, second) == 1) {
                    cn++;
                }
            }
        }
        return cn;
    }
};