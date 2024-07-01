/*
    Problem_link: https://leetcode.com/problems/grumpy-bookstore-owner/description/?envType=daily-question&envId=2024-06-21

    Type: Medium
    Topic: Sliding window
    TC: O(N)
    SC: O(1)

*/

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int zero_sum = 0, windo_sum = 0, maxWindow = 0, n = customers.size();
        for(int i=0;i<n;i++){
            if(grumpy[i] == 0){
                zero_sum += customers[i];
            }
            if(i<minutes){
                //windo_sum += (grumpy[i] == 1 ? customers[i] : 0);
                if(grumpy[i] == 1)  windo_sum += customers[i];
            }
            else{
                if(grumpy[i] == 1){
                    windo_sum += customers[i];
                }
                if(grumpy[i- minutes] == 1){
                    windo_sum -= customers[i-minutes];
                }
            }

            maxWindow = max(maxWindow, windo_sum);
        }
        return maxWindow + zero_sum;
    }
};