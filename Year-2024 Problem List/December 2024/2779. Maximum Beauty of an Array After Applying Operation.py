# Problem          : 2779. Maximum Beauty of an Array After Applying Operation
# Time Complexity  : O(n+maxValue)
# Python Solution

""" -------------------------------------Brute Forces-------------------------------------"""
class Solution:
    def maximumBeauty(self, nums: List[int], k: int) -> int:
        ans, crn = 0, 0
        n = len(nums)
        ok = all(x == nums[0] for x in nums)
        if ok == True:
            return n
        nums.sort()
        for i in range(0, n):
            crn = 1
            for j in range(i + 1, n):
                if abs(nums[i] - nums[j]) <= 2 * k:
                    crn += 1
            ans = max(ans, crn)
        return ans

""" -------------------------------------Binary Search -------------------------------------"""
from typing import List

class Solution:
    def maximumBeauty(self, nums: List[int], k: int) -> int:
        nums.sort()
        maxiBeauty = 0
        for i, num in enumerate(nums):
            upperbound = self._find_upper_bound(nums, num + 2 * k)
            maxiBeauty = max(maxiBeauty, upperbound - i + 1)
        return maxiBeauty

    def _find_upper_bound(self, arr: List[int], val: int) -> int:
        low, high, res = 0, len(arr) - 1, -1
        while low <= high:
            mid = low + (high - low) // 2
            if arr[mid] <= val:
                res = mid
                low = mid + 1
            else:
                high = mid - 1
        return res
""" ------------------------------------- Sliding Window -------------------------------------"""
class Solution:
    def maximumBeauty(self, nums: list[int], k: int) -> int:
        nums.sort()
        left = 0
        max_beauty = 0
        for right in range(len(nums)):
            while nums[right] - nums[left] > 2 * k:
                left += 1
            max_beauty = max(max_beauty, right - left + 1)

        return max_beauty

if __name__ == "__main__":
    nums = [4, 6, 1, 2]
    k = 2
    solution = Solution()
    result = solution.maximumBeauty(nums, k)
    print(f"The maximum beauty of the array {nums} with k = {k} is: {result}")
