class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int>copy = h;
        sort(h.begin(),h.end());
        int cn = 0, n = h.size();

        for(int i=0;i<n;i++){
            if(copy[i]!=h[i]){
                cn++;
            }
        }
        return cn;
        
    }
};