# Problem: 2490. Circular Sentence
# Python Solution
class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        words = sentence.split(" ")
        n = len(words)

        LastChar = words[n - 1][-1]
        for i in range(n):
            if words[i][0] != LastChar:
                return False
            LastChar = words[i][-1]

        return True