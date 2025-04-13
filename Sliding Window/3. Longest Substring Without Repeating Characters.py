class Solution:
    def lengthOfLongestSubstring(s: str) -> int:
        setChar = set()
        n = len(s)
        l = 0
        res = 0
        for r in range(n):
            while s[r] in setChar:
                setChar.remove(s[l])
                l+=1
            setChar.add(s[r])
            res = max(res,r-l+1)
        return res
