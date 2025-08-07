/*
# Problem          : 1963. Minimum Number of Swaps to Make the String Balanced
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    int minSwaps(string s) {
        int stackSize = 0;
        int n = (int)s.size();

        for (char ch : s) {
            if (ch == '[') {
                stackSize++;
            } else {
                if (stackSize > 0) {
                    stackSize--;
                }
            }
        }
        return (stackSize + 1) / 2;
    }
};