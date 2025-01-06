/*
# Problem: 1769. Minimum Number of Operations to Move All Balls to Each Box
# Time Complexity : O(n ^ 2)
# Space Complexity : O(1)
# C++ Solution 
*/
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = (int)boxes.size();
        vector<int> answer(n);
        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1') {
                for (int j = 0; j < n; j++) {
                    answer[j] += abs(j - i);
                }
            }
        }
        return answer;
    }
};