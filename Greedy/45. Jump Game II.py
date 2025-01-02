# Problem          : 45. Jump Game II
# Time Complexity  : O(n)
# Python Solution

class Solution:
    def jump(self, nums: List[int]) -> int:
        res = 0
        l = r = 0
        while r < len(nums) - 1:
            farthest = 0
            for i in range(l, r + 1):
                farthest = max(farthest, i + nums[i])
            l = r + 1
            r = farthest
            res += 1
        return res
    

Function jump(nums: List of Integers) -> Integer:
    Initialize res to 0  // Number of jumps
    Initialize l to 0    // Left pointer
    Initialize r to 0    // Right pointer
    
    While r < length(nums) - 1:
        Initialize farthest to 0  // Farthest point that can be reached
        
        For i from l to r:
            Update farthest to max(farthest, i + nums[i])
        
        Set l to r + 1  // Move left pointer to the next range
        Set r to farthest  // Move right pointer to the farthest point reached
        Increment res by 1  // Increment number of jumps
    
    Return res  // Minimum number of jumps required to reach the last index