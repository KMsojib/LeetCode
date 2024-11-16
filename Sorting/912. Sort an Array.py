# Problem          : 912. Sort an Array
# Time Complexity  : 
# Python Solution

""" -----------------------------Using O(nlog(n))TC-----------------------------"""

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};

""" -----------------------------Using Hashing C++ -----------------------------"""
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

""" -----------------------------Python -----------------------------"""
class Solution:
    def sortArray(self, nums):
        hash_table = {}
        for x in nums:
            hash_table[x] = hash_table.get(x, 0) + 1
        ans = []
        for x in sorted(hash_table):
            ans.extend([x] * hash_table[x])
        
        return ans
