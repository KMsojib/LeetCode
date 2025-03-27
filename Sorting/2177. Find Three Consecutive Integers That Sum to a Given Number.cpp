# Problem          : 2177. Find Three Consecutive Integers That Sum to a Given Number
# Time Complexity  : O(1)

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if (num % 3) {
            return {};
        }
        long long val = num / 3;
        return {val - 1, val, val + 1};
    }
};