# Problem          : 2233. Maximum Product After K Increments
# C++ / Python Solution

# Time Complexity :
/*
    1.Building MinHeap take :   O(n)
    2. Processing k increments take : O(k * log(n))
    3. Final product calculation take : O(n)

    Total time complexity : O(n + k * log(n) + n) = O(k * log(n))
*/

# Space Complexity :
/*
    1. MinHeap take : O(n)
    2. Final product calculation take : O(1)

    Total space complexity : O(n)
*/

class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap(nums.begin(),
                                                               nums.end());
        while (k > 0) {
            int choto = minHeap.top();
            minHeap.pop();
            choto++;
            minHeap.push(choto);
            k -= 1;
        }

        long long ans = 1;
        while (!minHeap.empty()) {
            ans *= minHeap.top();
            ans %= 1000000007;
            minHeap.pop();
        }

        return ans;
    }
};