class Solution:
    def fourSum(self, nums, target):
        nums.sort()
        ans = []
        n = len(nums)
        for i in range(n - 3):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            for j in range(i + 1, n - 2):
                if j > i + 1 and nums[j] == nums[j - 1]:
                    continue
                left, right = j + 1, n - 1
                while left < right:
                    total = nums[i] + nums[j] + nums[left] + nums[right]
                    if total == target:
                        ans.append([nums[i], nums[j], nums[left], nums[right]])
                        while left < right and nums[left] == nums[left + 1]:
                            left += 1
                        while left < right and nums[right] == nums[right - 1]:
                            right -= 1
                        left += 1
                        right -= 1
                    elif total < target:
                        left += 1
                    else:
                        right -= 1
        return ans

if __name__ == "__main__":
    s = Solution()
    print(s.fourSum([1, 0, -1, 0, -2, 2], 0))
    print(s.fourSum([2, 2, 2, 2, 2], 8))
    print(s.fourSum([-2, -1, -1, 1, 1, 2, 2], 0))
    print(s.fourSum([-3, -2, -1, 0, 0, 1, 2, 3], 0))
    print(s.fourSum([-1, 0, 1, 2, -1, -4], -1))
    print(s.fourSum([0, 0, 0, 0], 0))
    print(s.fourSum([1, -2, -5, -4, -3, 3, 3, 5], -11))
    print(s.fourSum([0, 0, 0, 0], 0))
    print(s.fourSum([-1, 0, 1, 2, -1, -4], -1))
    print(s.fourSum([1, 0, -1, 0, -2, 2], 0))
    print(s.fourSum([2, 2, 2, 2, 2], 8))
    print(s.fourSum([-2, -1, -1, 1, 1, 2, 2], 0))
    print(s.fourSum([-3, -2, -1, 0, 0, 1, 2, 3], 0))
    print(s.fourSum([-1, 0, 1, 2, -1, -4], -1))
    print(s.fourSum([0, 0, 0, 0], 0))
    print(s.fourSum([1, -2, -5, -4, -3, 3, 3, 5], -11))
    print(s.fourSum([0, 0, 0, 0], 0))
    print(s.fourSum([-1, 0, 1, 2, -1, -4], -1))