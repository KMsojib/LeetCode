# Problem          : 1768. Merge Strings Alternately
# Python Solution
""" ---------------------------------------Python Code---------------------------------------"""

class Solution:
    def mergeAlternately(self, s: str, t: str) -> str:
        ans = []
        n, m = len(s), len(t)
        i, j = 0, 0

        while i < n or j < m:
            if i < n and j < m:
                ans.append(s[i])
                ans.append(t[j])
                i += 1
                j += 1
            elif i >= n:
                ans.append(t[j])
                j += 1
            else:
                ans.append(s[i])
                i += 1

        return ''.join(ans)
