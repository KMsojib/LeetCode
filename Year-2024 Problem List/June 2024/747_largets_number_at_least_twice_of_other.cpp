class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        if(v[nums.size()-2].first*2 <= v[nums.size()-1].first){
            return v[nums.size()-1].second;
        }
        else{
            return -1;
        }
        
    }

    /*
        Time complextiy: O(nlogn)
        Space complexity: o(n)

    */
};

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first_max = -1,second_max = -1,index=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>first_max){
                second_max = first_max;
                first_max = nums[i];
                index = i;
            }
            else{
                if(nums[i] > second_max){
                    second_max = nums[i];
                }
            }
        }

        if(second_max * 2 <= first_max){
            return index;
        }
        else{
            return -1;
        }
    }
};