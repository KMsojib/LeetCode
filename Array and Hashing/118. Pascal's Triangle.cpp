class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>rect;
        for (int i = 0; i<numRows;i++){
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++){
                row[j] = rect[i-1][j]+rect[i-1][j-1];
            }
            rect.push_back(row);
        }
        return rect;
    }
};