# Problem          : 386. Lexicographical Numbers
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ / Python Solution


class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        int current = 1;

        for (int i = 0; i < n; ++i) {
            result.push_back(current);
            if (current * 10 <= n) {
                current *= 10; // Go to the next level
            } else {
                while (current % 10 == 9 || current + 1 > n) {
                    current /= 10; // Backtrack to the parent
                }
                current++; // Move to the next sibling
            }
        }

        return result;
    }
};