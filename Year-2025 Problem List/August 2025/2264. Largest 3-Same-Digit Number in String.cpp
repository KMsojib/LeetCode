/*
# Problem          : 2264. Largest 3-Same-Digit Number in String
# Time Complexity  : O(n)
# space Complexity : 
# C++ Solution
*/
class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        int n = (int)num.size();
        for (int i = 0; i < n; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                string curr = num.substr(i, 3);
                if (curr > res) {
                    res = curr;
                }
            }
        }
        return res;
    }
};