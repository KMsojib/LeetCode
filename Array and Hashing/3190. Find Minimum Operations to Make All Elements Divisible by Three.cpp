/*
    Problem link:https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/
    Time Complexity: O(1)
    Space Complexity: O(1)

Analysis:

Outer Loop: The for loop runs for each element in the nums vector, which has a time complexity of O(N)

Inner While Loops: For each element that is not divisible by 3, the code runs two while loops to find the nearest multiple of 3 by either incrementing or decrementing the value. In the worst case, each while loop can run up to 2 iterations (since the maximum distance to the nearest multiple of 3 is 2). Therefore, the time complexity for the inner loops is O(1)
 for each element.
Combining these, the overall time complexity is:
    O(N)×O(1)=O(N)
So, the time complexity of your code is O(N),
*/
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] % 3 != 0) {
                int cn1 = 0, cn2 = 0;
                int temp1 = nums[i], temp2 = nums[i];
                while (temp1 % 3 != 0) {
                    temp1++;
                    cn1++;
                }
                while (temp2 % 3 != 0) {
                    temp2--;
                    cn2++;
                }
                res += min(cn1, cn2);
            }
        }
        return res;
    }
};

// Another Aproach
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res = 0;
        for(auto x : nums){
            res += min(n%3, 3 - (n%3));
        }
        return res;
    }
};