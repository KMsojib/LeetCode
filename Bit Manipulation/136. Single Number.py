# Problem          : 136. Single Number
# Time Complexity  : O(n)
# Python Solution

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        xor = 0
        for num in nums:
            xor ^= num
        return xor


def main():
    solution = Solution()
    nums = [2,2,1]
    result = solution.singleNumber(nums)
    print(result)

if __name__ == "__main__":
    main()