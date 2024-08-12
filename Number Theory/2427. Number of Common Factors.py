class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        rangE = min(a,b)
        cn = 0
        for i in range(1,rangE+1):
            if a%i==0 and b%i==0:
                cn += 1
        return cn