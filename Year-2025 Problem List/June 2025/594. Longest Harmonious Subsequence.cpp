/*
# Problem          : 594. Longest Harmonious Subsequence
# Time Complexity  : 
# space Complexity : 
# C++ Solution
*/

/*
# Approach         : Sliding Window
# Time Complexity  : O(n log n)
# Space Complexity : O(1)
*/
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = (int)nums.size();
        int left = 0, longHarm = 0;

        sort(nums.begin(), nums.end());

        for (int right = 0; right < n; right++) {
            while (nums[right] - nums[left] > 1) {
                left++;
            }
            if (nums[right] - nums[left] == 1) {
                longHarm = max(longHarm, right - left + 1);
            }
        }
        return longHarm;
    }
};



/*
# Approach         : Hash Map
# Time Complexity  : O(n)
# Space Complexity : O(n)
*/

class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp;
        int longHarm = 0;
        for(auto num : nums){
            mp[num]++;
        }

        for(auto[x,y] : mp){
            if(mp.find(x+1) != mp.end()){
                longHarm = max(longHarm, y + mp[x+1]);
            }
        }
        return longHarm;
    }
};
