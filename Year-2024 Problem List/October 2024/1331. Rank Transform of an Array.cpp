class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;

        set<int>nums(arr.begin(),arr.end());
        int rank = 1;
        for(auto num: nums){
            mp[num] = rank;
            rank++;
        }

        for(int i=0;i<arr.size();i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};