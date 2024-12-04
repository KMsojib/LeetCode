/*
# Problem          : 2825. Make String a Subsequence Using Cyclic Increments
# Time Complexity  : O(n+m)
# C++ Solution
Time: 27 minute
*/
/*---------------------------------*Two Pointer*---------------------------------*/
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = (int)str1.size();
        int m = (int)str2.size();
        bool ok = true;
        int l = 0, r = 0;
        while (l < n && r < m) {
            if (str1[l] == str2[r]) {
                l++, r++;
            } else if ((str1[l] + 1) == str2[r]) {
                l++, r++;
            } else if ((str1[l] == 'z' && str2[r] == 'a')) {
                l++, r++;
            } else {
                l++;
            }
        }
        return r == m;
    }
};

/*---------------------------------*Python*---------------------------------*/
class Solution:
    def canMakeSubsequence(self, str1: str, str2: str) -> bool:
        n = len(str1)
        m = len(str2)
        l, r = 0, 0

        while l < n and r < m:
            if str1[l] == str2[r]:
                l += 1
                r += 1
            elif (ord(str1[l]) + 1) % 26 == ord(str2[r]) % 26:
                l += 1
                r += 1
            else:
                l += 1

        return r == m
