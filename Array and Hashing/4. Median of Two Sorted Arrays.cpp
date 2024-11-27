/*
# Problem          : 4. Median of Two Sorted Arrays
# Time Complexity  : 
# C++ Solution
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> all = nums1;
        for (int i = 0; i < (int)nums2.size(); i++) {
            all.push_back(nums2[i]);
        }
        sort(all.begin(), all.end());
        int n = (int)all.size();
        if (n & 1) {
            return all[n / 2];
        } else {
            n = n / 2;
            double x = (all[n - 1] + all[n]) / 2.0;
            return x;
        }
    }
};