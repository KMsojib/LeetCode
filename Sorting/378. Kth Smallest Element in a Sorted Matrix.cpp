# Problem          : 378. Kth Smallest Element in a Sorted Matrix
# Time Complexity  : O(n)
# C++ / Python Solution

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                pq.push(matrix[i][j]);
            }
        }
        for (int i = 0; i < k - 1; i++) {
            pq.pop();
        }
        return pq.top();
    }
};