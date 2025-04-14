# Problem          : 1534. Count Good Triplets
# Time Complexity  : O(N^3)
# C++ / Python Solution

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = (int)arr.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (i < j && j < k) {
                        int x = abs(arr[i] - arr[j]);
                        int y = abs(arr[j] - arr[k]);
                        int z = abs(arr[i] - arr[k]);

                        if (x <= a && y <= b && z <= c) {
                            cnt += 1;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};