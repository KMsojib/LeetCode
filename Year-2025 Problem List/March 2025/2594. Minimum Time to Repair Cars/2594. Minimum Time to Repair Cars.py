# Problem          : 2594. Minimum Time to Repair Cars
# Time Complexity  : O(n⋅log(m⋅max_rank))
# Python Solution

class Solution:
    def repairCars(self, ranks: List[int], cars: int) -> int:

        def count_repaired(time: int) -> int:
            cnt = 0
            for rank in ranks:
                cnt += int(math.sqrt(time / rank))
            return cnt

        left, right = 0, ranks[0] * cars * cars
        res = -1

        while left <= right:
            mid = left + (right - left) // 2
            required = count_repaired(mid)

            if required >= cars:
                res = mid
                right = mid - 1
            else:
                left = mid + 1
        return res