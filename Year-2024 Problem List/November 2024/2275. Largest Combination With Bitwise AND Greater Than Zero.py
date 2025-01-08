# Problem          : 2275. Largest Combination With Bitwise AND Greater Than Zero
# Time Complexity  : 

""" 
if bit position are same then it will give > 1 value
[1,4,5,9,8,7,2]
Binary representations:

    pos  4 3 2 1

    1 => 0 0 0 1
    4 => 0 1 0 0
    5 => 0 1 0 1
    9 => 1 0 0 1
    8 => 1 0 0 0
    7 => 0 1 1 1
    2 => 0 0 1 0

0 bit:
    1 0 1 1 0 1 0 = 4 number 0th bit set 
1 bit:
    0 0 0 0 0 1 1 = 2 number 1st bit set
2 bit:
    0 1 1 0 0 1 0 = 3 number 2nd bit set
3 bit:
    0 0 0 1 1 0 0 = 2 number 3rd bit set

max set bit are 4
if we take And of these number:
    (1 & 4 & 5 & 7) > 1:
        ans = 4
total we need to check 32 bits and find the max set bit.
"""

# Python Solution
class Solution:
    def largestCombination(self, candidates: List[int]) -> int:
        res = 0
        for i in range(24):
            crn = 0
            for num in candidates:
                crn += 1 if (1<<i) & num else 0
            res = max(res,crn)
        return res

