/*
leetCode: 415. Add Strings
Time Complexity: O(n)
*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string s = "";
        int n = num1.size(), m = num2.size();
        int i = n - 1, j = m - 1, carry = 0;
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i] - '0';
            if (j >= 0) sum += num2[j] - '0';
            carry = sum / 10;
            s.push_back((sum % 10) + '0');
            i--;
            j--;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
