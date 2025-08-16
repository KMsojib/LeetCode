/*
# Problem          : 1323. Maximum 69 Number
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/
class Solution {
public:
    int maximum69Number(int num) {
        string res = to_string(num);
        for (int i = 0; i < res.size(); i++) {
            if (res[i] == '6') {
                res[i] = '9';
                break;
            }
        }
        return stoi(res);
    }
};