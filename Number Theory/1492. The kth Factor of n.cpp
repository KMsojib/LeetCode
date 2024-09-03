class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factor;
        for (int i = 1; i <= (n / 2); i++) {
            if (n % i == 0) {
                factor.push_back(i);
            }
        }
        factor.push_back(n);
        if (factor.size() >= k) {
            return factor[k - 1];
        } else {
            return -1;
        }
    }
};