/*
    Problem Link:https://leetcode.com/problems/pass-the-pillow/description/?envType=daily-question&envId=2024-07-06
    Time Complexity:O(1)
    Space Complexity:O(1)

*/

class Solution {
public:
    int passThePillow(int n, int time) {
        int FullRound = time / (n-1);
        int Extra_time = time % (n-1);

        if(FullRound%2 == 0){
            Extra_time += 1;
            return Extra_time;
        }
        else{
            return n - Extra_time;
        }
    }
};
