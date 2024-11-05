/*
    Problem linK: https://leetcode.com/problems/crawler-log-folder/description/?envType=daily-question&envId=2024-07-10
    Time Complexity: O(N)
    Space Complexity: O(1)

*/

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(auto log : logs){
            if(log =="../"){
                if(count>0){
                    count--;
                }
            }
            else if(log != "./"){
                count ++;
            }
        }
        return count;
    }
};