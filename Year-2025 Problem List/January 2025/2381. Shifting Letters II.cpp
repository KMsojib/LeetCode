/*
    # Problem          : 2381. Shifting Letters II
    # Time Complexity  : O(n+m)
    # Space Complexity : O(n)
    # C++ Solution
*/
// Approach: Prefix Sum
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = (int)s.size();
        vector<int> shift(n, 0);
        
        for (auto ch : shifts) {
            int start = ch[0], end = ch[1], dir = ch[2];
            int amount = (dir == 1) ? 1 : -1;
            shift[start] += amount;
            if (end + 1 < n) {
                shift[end + 1] -= amount;
            }
        }

        int numberOfShifts = 0;
        string result(n, ' ');
        for (int i = 0; i < n; ++i) {
            numberOfShifts = (numberOfShifts + shift[i]) % 26;
            if(numberOfShifts < 0){
                numberOfShifts += 26;
            }
            s[i] = 'a' + (s[i] - 'a' + numberOfShifts) % 26;
        }
        return s;
    }
};
