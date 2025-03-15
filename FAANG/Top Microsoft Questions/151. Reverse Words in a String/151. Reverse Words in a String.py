class Solution:
    def reverseWords(self, s: str) -> str:
        split_string = s.split()
        split_string.reverse()
        return " ".join(split_string)