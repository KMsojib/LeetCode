# Problem          : 2570. Merge Two 2D Arrays by Summing Values
# Time Complexity  : O(N+M)
# Python Solution

class Solution:
    def mergeArrays(
        self, nums1: List[List[int]], nums2: List[List[int]]
    ) -> List[List[int]]:

        n, m = len(nums1), len(nums2)
        left, right = 0, 0
        result = []

        while left < n and right < m:
            if nums1[left][0] == nums2[right][0]:
                result.append([nums1[left][0], nums1[left][1] + nums2[right][1]])
                left += 1
                right += 1
            elif nums1[left][0] < nums2[right][0]:
                result.append(nums1[left])
                left += 1
            else:
                result.append(nums2[right])
                right += 1

        while left < n:
            result.append(nums1[left])
            left += 1

        while right < m:
            result.append(nums2[right])
            right += 1

        return result