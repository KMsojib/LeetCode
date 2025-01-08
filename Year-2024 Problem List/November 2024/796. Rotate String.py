# Problem: 796. Rotate String
# Python Solution

class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        TwoString = s + s
        return TwoString.find(goal) != -1