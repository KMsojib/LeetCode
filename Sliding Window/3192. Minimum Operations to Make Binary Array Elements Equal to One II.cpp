/*
    Problme Link: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/description/
    Problem Type: Bit Manipulation
*/



/*
 if we flip  any value odd number of Time then it change
 if we flip  any value even number of Timt then it remain same.

 exmaple:
 Odd time fliping:
  0 --> flip  3 time then --> 1, 0, 1 
  1 --> flip  5 time then --> 0,1,0,1,0

 Even time flipping:
  0--> flip 4 time then --> 1, 0, 1, 0
  1-->flip 2 time then --> 0, 1

*/

// Brute Force solution getting TLE :3
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == 1)    continue;
            for(int j=i;j<n;j++){
                nums[j] = nums[j]^1;
            }
            ans++;
        }

        return ans;
    }
};

// Optimal solution:
/*
    Time Complexity: O(N)
    Space Complexity: O(1)
    Topic: 
*/
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        for(int i=0;i<n;i++){
            if((nums[i]==1 && ans%2==1) || (nums[i]==0 && ans%2==0)){
                ans++;
            }
        }

        return ans;
    }
};