# Problem          : 1968. Array With Elements Not Equal to Average of Neighbors
# Time Complexity  : O(n)
# Python Solution

class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        n = len(nums)

        for i in range(1, n - 1):
            if 2 * nums[i] == (nums[i - 1] + nums[i + 1]):
                nums[i], nums[i + 1] = nums[i + 1], nums[i]

        for i in range(n - 2, 0, -1):
            if 2 * nums[i] == (nums[i - 1] + nums[i + 1]):
                nums[i], nums[i - 1] = nums[i - 1], nums[i]

        return nums
    
    