/*
    Problem link: https://leetcode.com/problems/water-bottles/description/
    Time Complexity: O(Log(N))
    Space Complexity: O(1)
*/
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int blank_bottol = numBottles;
        while (blank_bottol >= numExchange) {
            int temp = blank_bottol / numExchange;
            blank_bottol %= numExchange;
            blank_bottol += temp;
            ans += temp;
        }
        return ans;
    }
};