# Problem          : 2161. Partition Array According to Given Pivot
# Time Complexity  : O(N)
# Space Complexity : O(N)
# Python Solution

class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        left = 0
        right = len(nums) - 1
        ans = [0] * len(nums)
        i, j = 0, 0
        for i, j in zip(range(len(nums)), range(len(nums) - 1, -1, -1)):
            if nums[i] < pivot:
                ans[left] = nums[i]
                left += 1
            if nums[j] > pivot:
                ans[right] = nums[j]
                right -= 1

        while left <= right:
            ans[left] = pivot
            left += 1

        return ans
