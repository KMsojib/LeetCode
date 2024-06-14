class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cn = 0;
        for(int i=0;i<n;i++){
            int left = 0, right = m-1;
            while(left<=right){
                int mid = left+(right-left)/2;
                if(grid[i][mid] < 0){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }
            cn += m-left;
        }
        return cn;
    }
};