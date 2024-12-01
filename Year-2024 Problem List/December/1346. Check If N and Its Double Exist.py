# Problem          : 
# Time Complexity  : O(n)
# Python Solution
"""--------------------------------------------Python--------------------------------------------"""
# Hashing
class Solution:
    def checkIfExist(self, arr):
        mp = {}
        for num in arr:
            mp[num] = mp.get(num, 0) + 1
        
        for num in arr:
            if num != 0 and 2 * num in mp:
                return True
            if num == 0 and mp[num] > 1:
                return True
        
        return False


# Binary Search
# Time complexity: O(nlogn)
class Solution:
    def checkIfExist(self, arr):
        arr.sort()
        n = len(arr)
        for i in range(n):
            target = arr[i] * 2
            idx = self.binary_search(arr, target, n)
            if idx != i and idx >= 0:
                return True
        return False

    def binary_search(self, arr: List[int], target: int, n: int) -> int:
        left, right = 0, n - 1
        while left <= right:
            mid = left + (right - left) // 2
            if arr[mid] == target:
                return mid
            elif arr[mid] > target:
                right = mid - 1
            else:
                left = mid + 1
        return -1


def main():
    solution = Solution()
    arr = [10,2,5,3]
    result = solution.checkIfExist(arr)
    print("Result:", result)

if __name__ == "__main__":
    main()
