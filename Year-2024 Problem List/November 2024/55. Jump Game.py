# Problem          : 55. Jump Game
# Time Complexity  : 
# Python Solution

class Solution:
    def canJump(self, nums):
        i, n = 0, len(nums)
        reach = 0
        while i < n and i <= reach:
            reach = max(i + nums[i], reach)
            i += 1
        return i == n

def main():
    test_case = [2, 3, 1, 1, 4]
    solution = Solution()
    result = solution.canJump(test_case)
    print(f"Can jump to the end: {result}")

if __name__ == "__main__":
    main()
