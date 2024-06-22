class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0, prefSum = 0;
        unordered_map<int, int> freq;
        freq[0] = 1;
        for (int i = 0; i < n; i++) {
            prefSum += (nums[i] % 2 == 1) ? 1 : 0;
            ans += freq[prefSum - k];
            freq[prefSum]++;
        }
        return ans;
    }
};