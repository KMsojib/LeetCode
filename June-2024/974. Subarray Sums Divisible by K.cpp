class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int, int> mp;
        mp[0] = 1;
        int pref_sum = 0, cn = 0;
        for (int i = 0; i < nums.size(); i++) {
            pref_sum += nums[i];
            int remove = pref_sum % k;
            cn += mp[remove];
            mp[remove] ++;
        }
        return cn;
    }
};