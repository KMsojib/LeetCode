# Problem          : 3024. Type of Triangle
# Time Complexity  : O(1)
# C++ / Python Solution

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];
        if (a + b <= c || a + c <= b || b + c <= a) {
            return "none";
        }
        if (a == b && b == c) {
            return "equilateral";
        } else if (a == b || a == c || b == c) {
            return "isosceles";
        } else {
            return "scalene";
        }
    }
};

