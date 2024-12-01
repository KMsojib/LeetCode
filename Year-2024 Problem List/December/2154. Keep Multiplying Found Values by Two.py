# Problem          : 2154. Keep Multiplying Found Values by Two
# Time complexity  : O(nlogn)
# Python Solution

class Solution:
    def findFinalValue(self, nums: List[int], original: int) -> int:
        nums.sort()
        while True:
            if self.binary_search(nums, original):
                original *= 2
            else:
                return original
    def binary_search(self, arr: List[int], target: int) -> bool:
        left, right = 0, len(arr) - 1
        while left <= right:
            mid = left + (right - left) // 2
            if arr[mid] == target:
                return True
            elif arr[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return False
def main():
    nums = [5, 3, 6, 1, 12]
    original = 3
    solution = Solution()
    result = solution.findFinalValue(nums, original)
    print(f"Final value: {result}")


if __name__ == "__main__":
    main()