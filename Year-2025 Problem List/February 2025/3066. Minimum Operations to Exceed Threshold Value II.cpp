/*
# Problem          : 3066. Minimum Operations to Exceed Threshold Value II
# Time Complexity  : (O(n \log n))
# C++ Solution
*/

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long n = (int)nums.size();
        long long count = 0;

        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (auto num : nums) {
            pq.push(num);
        }

        while (pq.top() < k) {
            count++;
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();

            pq.push(min(first, second) * 2 + max(first, second));
        }
        return count;
    }
};