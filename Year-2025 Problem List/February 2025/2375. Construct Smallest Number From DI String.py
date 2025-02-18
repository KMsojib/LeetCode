# Problem          : 2375. Construct Smallest Number From DI String
# Time Complexity  : O(N)
# Python Solution

class Solution:
    def smallestNumber(self, pattern: str) -> str:
        n = len(pattern)

        res, stack = [], []
        for i in range(n + 1):
            stack.append(i + 1)

            while stack and ((i == n) or pattern[i] == "I"):
                res.append(str(stack.pop()))

        return "".join(res)