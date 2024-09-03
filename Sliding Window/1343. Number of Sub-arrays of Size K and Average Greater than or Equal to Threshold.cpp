class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0, right = 0, sum = 0, cn = 0;
        while (right < arr.size()) {
            sum += arr[right];
            if (right - left + 1 < k) {
                right++;
            } else if (right - left + 1 == k) {
                int temp = sum / k;
                if (temp >= threshold) {
                    cn++;
                }
                sum -= arr[left];
                left++;
                right++;
            }
        }
        return cn;
    }
};