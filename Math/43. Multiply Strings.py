# Problem          : 43. Multiply Strings
# Time Complexity  : 
# Python Solution

class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1 == "0" or num2 == "0":
            return "0"
        m, n = len(num1), len(num2)
        result = [0] * (m + n)
        for i in range(m - 1, -1, -1):
            for j in range(n - 1, -1, -1):
                mul = (ord(num1[i]) - ord("0")) * (ord(num2[j]) - ord("0"))
                sum = mul + result[i + j + 1]
                result[i + j + 1] = sum % 10
                result[i + j] += sum // 10
        resultStr = ""
        for num in result:
            if not resultStr and num == 0:
                continue
            resultStr += chr(num + ord("0"))
        return resultStr if resultStr else "0"


def main():
    solution = Solution()
    num1 = "123"
    num2 = "456"
    result = solution.multiply(num1, num2)
    print(f"Multiplication of {num1} and {num2} is: {result}")


if __name__ == "__main__":
    main()
