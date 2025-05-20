# Problem          : 3043. Find the Length of the Longest Common Prefix
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        if len(arr1) > len(arr2):
            arr1, arr2 = arr2, arr1

        prefix_set = set()
        for n in arr1:
            while n and n not in prefix_set:
                prefix_set.add(n)
                n = n // 10

        length = 0
        for n in arr2:
            while n and n not in prefix_set:
                n = n // 10
            if n in prefix_set:
                length = max(length, len(str(n)))
        return length

# C++ Solution : Brute Force but got TLE
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int len = 0;
        int n = (int)arr1.size(), m = (int)arr2.size();
        for (auto arr : arr1) {
            string s = to_string(arr);
            for (auto ch : arr2) {
                string t = to_string(ch);
                int idx = 0;
                while (idx < s.size() && idx < t.size() && s[idx] == t[idx]) {
                    idx++;
                }
                len = max(len, idx);
            }
        }
        return len;
    }
};