class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        map<int, int> hash_table;
        for (auto x : nums) {
            hash_table[x]++;
        }

        vector<int> ans;
        for (auto [x, y] : hash_table) {
            while (y) {
                ans.push_back(x);
                y--;
            }
        }
        return ans;
    }
};