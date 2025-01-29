/*
    # Problem          : 215. Kth Largest Element in an Array
    # Time Complexity  : O(nlogn)+O(klogn)=O((n+k)logn) 
    # C++ Solution
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for (auto num : nums) {
            pq.push(num);
        }

        while (!pq.empty() && k > 1) {
            pq.pop();
            k--;
        }
        return pq.top();
    }
};