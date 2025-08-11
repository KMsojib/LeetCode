/*
# Problem          : 
# Time Complexity  : 
# space Complexity : 
# C++ Solution
*/



Brute Force Solution
Runtime 0 ms Beats 100.00 % || Memory 42.21 MB Beats 79.92 %

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int cnt = 0, n = (int)nums1.size(), m = (int)nums2.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums1[i] % (nums2[j] * k) == 0) {
                    cnt += 1;
                }
            }
        }
        return cnt;
    }
};

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int cnt = 0, n = (int)nums1.size(), m = (int)nums2.size();

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums2[j] > nums1[i]) {
                    break;
                } else {
                    if (nums1[i] % (nums2[j] * k) == 0) {
                        cnt += 1;
                    }
                }
            }
        }
        return cnt;
    }
};
