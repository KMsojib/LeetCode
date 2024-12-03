/*
# Problem          : 191. Number of 1 Bits
# Time Complexity  : 
# C++ Solution
*/
class Solution {
public:
    int hammingWeight(int n) {
        return __builtin_popcount(n);
    }
};