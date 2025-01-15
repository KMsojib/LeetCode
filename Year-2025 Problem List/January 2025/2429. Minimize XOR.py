# Problem          : 2429. Minimize XOR
# Time Complexity  : long 2(N)
# Python Solution

class Solution:
    def minimizeXor(self, num1: int, num2: int) -> int:
        def count_bits(n):
            res = 0
            while n > 0:
                res += n & 1
                n = n >> 1
            return res

        cnt1, cnt2 = count_bits(num1), count_bits(num2)
        x = num1
        i = 0
        while cnt1 != cnt2:
            if cnt2 < cnt1 and x & (1 << i):
                cnt1 -= 1
                x = x ^ (1 << i)
            if cnt1 < cnt2 and x & (1 << i) == 0:
                cnt1 += 1
                x = x | (1 << i)
            i += 1
        return x

if __name__ == "__main__":
    solution = Solution()
    num1 = 3  
    num2 = 5  
    result = solution.minimizeXor(num1, num2)
    print(f"For num1={num1} and num2={num2}, minimized XOR is: {result}")

    num1 = 1  
    num2 = 12  
    result = solution.minimizeXor(num1, num2)
    print(f"For num1={num1} and num2={num2}, minimized XOR is: {result}")