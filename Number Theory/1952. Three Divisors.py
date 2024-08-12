class Solution:
    def isThree(self, n: int) -> bool:
        if n <= 2:
            return False
        else:
            cn = 0
            for i in range(1, n + 1):
                if n % i == 0:
                    cn += 1
                    if cn > 3:
                        break
            if cn == 3:
                return True
            else:
                return False
