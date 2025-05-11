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

// Python Solution TC O(n) SC O(1)
class Solution(object):
    def threeConsecutiveOdds(self, arr):
        odd_count = 0
        for i in arr:
            if i%2:
                odd_count+=1
            else:
                odd_count = 0
            
            if odd_count == 3:
                return True
        return False


// Another C++ Solution when i was noob
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool ok = false;
        int n = arr.size() - 1;
        int l = 0;
        while (l + 2 <= n) {
            //cout << arr[l] << arr[l + 1] << arr[l + 2] << endl;
            if (arr[l] % 2 != 0 && arr[l + 1] % 2 != 0 && arr[l + 2] % 2 != 0) {
                return true;
            } else {
                l++;
            }
        }
        return false;
    }
};