/*  problem link: https://leetcode.com/problems/contains-duplicate/description/https://leetcode.com/problems/longest-common-prefix/description/
    Time complexity: O(N)
    Space Complexity: O(N)
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i : nums){
            mp[i]++;
            if(mp[i] > 1)
            {
                return true;
            }
        }
        return false;
    }
};