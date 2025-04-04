# Problem          : 503. Next Greater Element II
# Time Complexity  : O(N)

class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:

        n = len(nums)
        result = [-1] * n
        stack = []

        for i in range(2 * n):
            while stack and nums[i % n] > nums[stack[-1]]:
                result[stack.pop()] = nums[i % n]
            if i < n:
                stack.append(i)
        return result