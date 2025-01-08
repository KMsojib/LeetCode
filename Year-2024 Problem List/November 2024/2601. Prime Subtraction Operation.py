# Problem          : 2601. Prime Subtraction Operation
# Time Complexity  : O(n log log n)
# Python Solution

# ----------------------------------------------Code----------------------------------------------
class Solution:
    prime = [1] * 10001

    @staticmethod
    def Sieve_of_Eratosthenes():
        Solution.prime[0] = Solution.prime[1] = 0
        p = 2
        while p * p <= 10000:
            if Solution.prime[p]:
                for i in range(p * p, 10001, p):
                    Solution.prime[i] = 0
            p += 1

    def primeSubOperation(self, nums: List[int]) -> bool:
        n = len(nums)
        self.Sieve_of_Eratosthenes()

        for i in range(n - 2, -1, -1):
            if nums[i] < nums[i + 1]:
                continue
            for p in range(2, nums[i]):
                if Solution.prime[p] == 0:
                    continue
                if nums[i] - p < nums[i + 1]:
                    nums[i] -= p
                    break
            if nums[i] >= nums[i + 1]:
                return False
        return True

def main():
    nums = [4,9,6,10]
    sol = Solution()
    result = sol.primeSubOperation(nums)
    print("Result: ",result)

if __name__ == "__main__":
    main()

