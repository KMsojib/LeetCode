/*
    Problem link: https://leetcode.com/problems/number-of-senior-citizens/description/?envType=daily-question&envId=2024-08-01
    Time Complexity: O(N)
    Space Complexity: O(1)
*/
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size() - 1;
        int result = 0;
        for (auto str : details) {
            int age = (str[11] - '0') * 10;
            age += str[12] - '0';
            if (age > 60) {
                result++;
            }
        }
        return result;
    }
};
