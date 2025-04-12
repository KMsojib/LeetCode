# Problem          : 3514. Number of Unique XOR Triplets II
# Time Complexity  : 
# C++ / Python Solution

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_map<int, int> mp;
        unordered_set<int> st;
        int n = (int)nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int crn = nums[i] ^ nums[j];
                mp[crn]++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (auto [x, _] : mp) {
                int crn = x ^ nums[i];
                st.insert(crn);
            }
        }
        return st.size();
    }
};