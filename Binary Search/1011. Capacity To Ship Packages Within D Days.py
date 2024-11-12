# Problem          : 1011. Capacity To Ship Packages Within D Days
# Time Complexity  : O(n⋅log(sum(weights)−max(weights)))
# Python Solution


""" -------------------------------------------code-------------------------------------------"""
class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        def Package(cap: int) -> bool:
            days_needed, current_weight = 1, 0  
            for weight in weights:
                if current_weight + weight > cap:
                    days_needed += 1
                    current_weight = 0
                current_weight += weight
            return days_needed <= days

        ans = -1
        left, right = max(weights), sum(weights)

        while left <= right:
            mid = left + (right - left) // 2
            if Package(mid):
                ans = mid
                right = mid - 1
            else:
                left = mid + 1
        return ans

def main():
    weights = [1,2,3,4,5,6,7,8,9,10]
    days = 5
    solution = Solution()
    result = solution.shipWithinDays(weights,days)
    print("Result ",result)
    
if __name__ == "__main__":
    main()
    