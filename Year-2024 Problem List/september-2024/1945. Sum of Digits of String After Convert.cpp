class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        for (char ch : s) {
            num += to_string(ch - 'a' + 1);
        }
        while (k-- > 0) {
            int digsum = 0;
            for (char digit : num) {
                digsum += digit - '0';
            }
            num = to_string(digsum);
        }
        return stoi(num);
    }
};