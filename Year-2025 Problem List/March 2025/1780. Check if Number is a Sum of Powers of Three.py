# Problem          : 1780. Check if Number is a Sum of Powers of Three
# Time Complexity  : O(N)
# Python Solution

class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        while n > 0:
            if n % 3 == 2:
                return False
            n //= 3

        return True