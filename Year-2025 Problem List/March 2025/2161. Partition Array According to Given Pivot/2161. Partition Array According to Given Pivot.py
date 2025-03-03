# Problem          : 2161. Partition Array According to Given Pivot
# Time Complexity  : O(N)
# Space Complexity : O(N)
# Python Solution

class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        less_val = []
        mid_val = []
        gret_val = []

        for num in nums:
            if num < pivot:
                less_val.append(num)
            elif num == pivot:
                mid_val.append(num)
            else:
                gret_val.append(num)

        ans = less_val + mid_val + gret_val
        return ans
"""
if num < pivot : left side
if num == pivot : relative order
if num > pivot : right side.

less_val = []
equal_val = []
greater_val = []

ans = less_val + equal_val + greater_val
return ans

"""

# Two Pointers
class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        left = 0
        right = len(nums) - 1

        while left <= right:
            if nums[left] < pivot:
                left += 1
            elif nums[right] >= pivot:
                right -= 1
            else:
                nums[left], nums[right] = nums[right], nums[left]
                left += 1
                right -= 1

        return nums