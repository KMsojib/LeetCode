class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
/*_---------------------------C++-----------------------------_*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = (int)nums.size();
        int index = 1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] != nums[index - 1]) {
                nums[index] = nums[i];
                index++;
            }
        }
        nums.resize(index);
        return index;
    }
};