# Problem          : 2442. Count Number of Distinct Integers After Reverse Operations
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    int reverse(int x) {
        int number = 0;
        while (x != 0) {
            number = x % 10 + number * 10;
            x /= 10;
        }
        return number;
    }
    int countDistinctIntegers(vector<int>& nums) {
        map<int, int> mp;
        for (auto num : nums) {
            mp[num]++;
            mp[reverse(num)]++;
        }
        int cnt = 0;
        for (auto [x, y] : mp) {
            cnt += 1;
        }
        return cnt;
    }
};