# Problem          : 2180. Count Integers With Even Digit Sum
# Time Complexity  : O(n log n)
# C++ Solution

class Solution {
public:
    int sumOfDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int countEven(int num) {
        int cnt = 0;
        for (int i = 2; i <= num; i++) {
            int digitSum = sumOfDigits(i);
            if (digitSum % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};