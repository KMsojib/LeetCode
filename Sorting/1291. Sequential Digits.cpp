class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        string digits = "123456789";
        int n = digits.size();
        for (int len = 1; len <= n; ++len) {
            for (int start = 0; start + len <= n; ++start) {
                int num = stoi(digits.substr(start, len));
                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};