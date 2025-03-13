# Problem          : 3356. Zero Array Transformation II
# Time Complexity  : O(N)
# Python Solution


class Solution:
    def minZeroArray(self, nums: List[int], queries: List[List[int]]) -> int:
        n = len(nums)
        total_sum = 0
        k = 0
        pref = [0] * (n + 1)

        for index in range(n):
            while total_sum + pref[index] < nums[index]:
                k += 1

                if k > len(queries):
                    return -1
                left, right, val = queries[k - 1]
                if right >= index:
                    pref[max(left, index)] += val
                    pref[right + 1] -= val
            total_sum += pref[index]

        return k
