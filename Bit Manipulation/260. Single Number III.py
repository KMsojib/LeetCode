# Problem          : 260. Single Number III
# Python Solution

""" 
Hashing Solution Solution:
# Time Complexity  : O(n)
# Space Complexity : O(n)

"""
class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        pref = {}
        for val in nums:
            pref[val] = pref.get(val, 0) + 1
        ans = []
        for key, value in pref.items():
            if value == 1:
                ans.append(key)
        return ans

"""
Bit Manipulation Solution Solution: XOR
# Time Complexity  : O(n)
# Space Complexity : O(1)

Explanation Using Chatgpt:
XOR Solution for Two Unique Numbers
Problem Statement:
Given an array where all numbers appear twice except two unique numbers, find those two numbers.

Approach:
    Step 1: XOR All Elements

    XOR all the numbers in the array. Let the result be xor.
    Since XOR cancels out duplicates, xor will be the XOR of the two unique numbers, say x and y.
    So, xor = x ^ y.

    Step 2: Find a Differentiating Bit
    
    The two numbers x and y must differ in at least one bit (because they are unique).
    
    Find the rightmost set bit (or any set bit) in xor. This bit represents a position where x and y differ.
        Example: diff = xor & -xor gives the rightmost set bit.
    
    Step 3: Divide Numbers Into Two Groups
    -> Use the set bit (diff) to partition the numbers into two groups:
        Group 1: Numbers where the set bit is 1.
        Group 2: Numbers where the set bit is 0.
    XOR all numbers in each group. Since duplicates cancel out, each group will give one unique number.
    
    Step 4: Return the Two Numbers
        The two XOR results are the two unique numbers.
"""
class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        xor = 0
        for num in nums:
            xor ^= num
        RightMostSetBit = xor & -xor
        a, b = 0, 0
        for num in nums:
            if num & RightMostSetBit:
                a ^= num
            else:
                b ^= num
        return [a, b]


def main():
    solution = Solution()
    nums = [1,2,1,3,2,5]
    result = solution.singleNumber(nums)
    print(result)

if __name__ == "__main__":
    main()