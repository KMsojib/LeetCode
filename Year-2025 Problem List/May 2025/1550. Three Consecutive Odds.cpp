# Problem          : 1550. Three Consecutive Odds
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool ok = false;
        int n = (int)arr.size();

        for (int i = 1; i < n - 1; i++) {
            if (arr[i] % 2 == 1 && arr[i - 1] % 2 == 1 && arr[i + 1] % 2 == 1) {
                ok = true;
                break;
            }
        }
        return ok;
    }
};