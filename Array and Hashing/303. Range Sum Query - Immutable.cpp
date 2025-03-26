# Problem          : 303. Range Sum Query - Immutable

class NumArray {
public:
    vector<int> pref;
    
    NumArray(vector<int>& nums) {
        int total = 0;
        for (auto num : nums) {
            total += num;
            pref.push_back(total);
        }
    }
    
    int sumRange(int left, int right) {
        int rightSum = pref[right];
        int leftSum = 0;
        if (left > 0) {
            leftSum = pref[left - 1];
        }
        return rightSum - leftSum;
    }
};