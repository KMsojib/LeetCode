# Problem          : 75. Sort Colors
# Time Complexity  : O(n)
# C++ / Python Solution

// Using builtin function
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};

// Using counting technique
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for (auto num : nums) {
            if (num == 0) {
                zero++;
            } else if (num == 1) {
                one++;
            } else {
                two++;
            }
        }
        nums.clear();
        while (zero) {
            nums.push_back(0);
            zero--;
        }
        while (one) {
            nums.push_back(1);
            one--;
        }
        while (two) {
            nums.push_back(2);
            two--;
        }
    }
};