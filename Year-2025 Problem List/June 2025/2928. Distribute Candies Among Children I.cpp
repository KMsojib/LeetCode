# Problem          : 2928. Distribute Candies Among Children I
# Time Complexity  : O(n^2)
# C++ / Python Solution

class Solution {
public:
    int distributeCandies(int n, int limit) {
        int valCount = 0;
        for (int i = 0; i <= limit; i++) {
            for (int j = 0; j <= limit; j++) {
                int k = n - i - j;
                if (k >= 0 && k <= limit) {
                    valCount++;
                }
            }
        }
        return valCount;
    }
};