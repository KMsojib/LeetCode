# Problem          :  3513. Number of Unique XOR Triplets I
# Time Complexity  : 
# C++ / Python Solution

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = (int)nums.size();
        if(n<3){
            return n;
        }

        int cnt = 1;
        while(cnt <= n){
            cnt *= 2;
        }
        return cnt;
    }
};

