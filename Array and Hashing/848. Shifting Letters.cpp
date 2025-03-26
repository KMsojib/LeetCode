class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = (int)s.size();

        auto ShiftChar = [&](char ch, int amount) {
            return 'a' + (ch - 'a' + amount) % 26;
        };
        vector<int> prefixSum(n, 0);
        prefixSum[n - 1] = shifts[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            prefixSum[i] = (shifts[i] + prefixSum[i + 1]) % 26;
        }
        for (int i = 0; i < n; i++) {
            s[i] = ShiftChar(s[i], prefixSum[i]);
        }
        return s;
    }
};