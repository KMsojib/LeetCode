class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        ans = [word[::-1] for word in words]

        return " ".join(ans)