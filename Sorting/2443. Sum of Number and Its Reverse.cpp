# Problem          : 2443. Sum of Number and Its Reverse
# Time Complexity  : O(N)
# C++ Solution

class Solution {
public:
    int reverseAndSum(int value) {
        string str = to_string(value);
        reverse(str.begin(), str.end());
        return value + stoi(str);
    }
    bool sumOfNumberAndReverse(int num) {
        for (int i = 0; i < num; i++) {
            if (reverseAndSum(i) == num) {
                return true;
            }
        }
        return (num == 0 ? true : false);
    }
};