# Problem          : 2929. Distribute Candies Among Children II
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long valCount = 0;
        for (int i = 0; i <= min(limit, n); i++) {
            valCount += max(min(limit, n - i) - max(0, n - i - limit) + 1, 0);
        }
        return valCount;
    }
};