# Problem          : 307. Range Sum Query - Mutable

class NumArray {
public:
    vector<int> pref;
    vector<int> nums;
    NumArray(vector<int>& nums_) : nums(nums_) {
        int total = 0;
        for (auto num : nums) {
            total += num;
            pref.push_back(total);
        }
    }

    void update(int index, int val) {
        int diff = val - nums[index];
        nums[index] = val;
        for (int i = index; i < pref.size(); ++i) {
            pref[i] += diff;
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