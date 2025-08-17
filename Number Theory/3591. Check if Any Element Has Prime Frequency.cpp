/*
# Problem          : 3591. Check if Any Element Has Prime Frequency
# Time Complexity  : O(n)
# space Complexity : O(n)
# C++ Solution
*/

class Solution {

public:
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int, int> mp;
        for (auto num : nums) {
            mp[num]++;
        }
        bool ok = false;
        for (auto [_, y] : mp) {
            if (isPrime(y)) {
                ok = true;
                break;
            }
        }
        return ok;
    }
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
};