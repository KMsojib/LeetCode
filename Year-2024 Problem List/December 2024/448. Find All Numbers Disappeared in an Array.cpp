/*
# Problem          : 448. Find All Numbers Disappeared in an Array
# Time Complexity  : O(n)
# C++ Solution
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> ans;
        int i = 1;
        while (i <= (int)nums.size()) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};