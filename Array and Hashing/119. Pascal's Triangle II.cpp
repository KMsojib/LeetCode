class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>rect;
        for (int i = 0; i<=33;i++){
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++){
                row[j] = rect[i-1][j]+rect[i-1][j-1];
            }
            rect.push_back(row);
        }
        return rect[rowIndex];
    }
};