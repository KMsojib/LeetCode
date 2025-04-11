# Problem          : 2843. Count Symmetric Integers
# Time Complexity  : O(High - Low)
# C++ / Python Solution

class Solution {
public:
    bool halfSum(int n) {
        string s = to_string(n);
        int m = (int)s.size();
        if (m % 2)
            return false;

        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < m / 2; i++) {
            sum1 += (s[i] - '0');
        }
        for (int i = m / 2; i < m; i++) {
            sum2 += (s[i] - '0');
        }

        return sum1 == sum2;
    }
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for (int i = low; i <= high; i++) {
            cnt += halfSum(i);
        }
        return cnt;
    }
};