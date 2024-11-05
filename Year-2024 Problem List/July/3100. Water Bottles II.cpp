/*
    this problem is similar to 1518 number problem. 
    Time Complexity: O(numBottles)
    Space Complexity: O(1)
*/
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        int blank_bottol = numBottles;
        while (blank_bottol >= numExchange) {
            ans++;
            blank_bottol -= numExchange;
            blank_bottol++;
            numExchange++;
        }
        return ans;
    }
};