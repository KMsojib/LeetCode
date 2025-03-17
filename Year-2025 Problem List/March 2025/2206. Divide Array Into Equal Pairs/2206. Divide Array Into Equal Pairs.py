# Problem          : 2206. Divide Array Into Equal Pairs
# Time Complexity  : O(N)
# Space Complexity : O(N)
# Python Solution

class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        Hash = defaultdict(int)
        
        for num in nums:
            Hash[num] += 1
        
        for count in Hash.values():
            if count % 2 != 0:
                return False
        return True