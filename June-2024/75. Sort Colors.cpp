class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one=0, two=0, three=0;
        for(auto x : nums){
            if(x==0)    one++;
            else if(x==1)   two++;
            else three++;
        }

        nums.clear();
        while(one)  nums.push_back(0),one--;
        while(two)  nums.push_back(1),two--;
        while(three)    nums.push_back(2),three--;
    }
};