/*
    Day-3
    problem link: https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/?envType=daily-question&envId=2024-07-03
*/

// TC: O(n.log n) && SC: 
class Solution {
public:
    int minDifference(vector<int>& a) {
        int len = a.size();
        if(len<=4)  return 0;

        sort(a.begin(),a.end());
        int result = INT_MAX , max_run = 4,left = 0, right = len-4;
        while(max_run){
            result = min(result,a[right]-a[left]);
            left ++;
            right ++;
            max_run --;
        }
        return result;
    }
};