class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        for i in range(len(words)):
            ch = words[i]
            if ch == ch[::-1]:
                return ch
        return ""
