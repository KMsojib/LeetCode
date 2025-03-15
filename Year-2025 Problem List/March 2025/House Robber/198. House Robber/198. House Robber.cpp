class Solution {
public:
    int rob(vector<int>& nums) {
        int Rob1 = 0, Rob2 = 0;

        for (auto num : nums) {
            int temp = max(Rob1 + num, Rob2);
            Rob1 = Rob2;
            Rob2 = temp;
        }
        return Rob2;
    }
};

// 