# Problem          : 2873. Maximum Value of an Ordered Triplet I
# Time Complexity  : O(N^3)
# Cpp Solution

#define ll long long
class Solution {
public:
    ll maximumTripletValue(vector<int>& nums) {
        ll maxi = 0;
        int n = (int)nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    ll sub = (nums[i] - nums[j]);
                    ll mul = (sub * nums[k]);
                    maxi = max(maxi, mul);
                }
            }
        }
        return (maxi < 0 ? -1 : maxi);
    }
};
