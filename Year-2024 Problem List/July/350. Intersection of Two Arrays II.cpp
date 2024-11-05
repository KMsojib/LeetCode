/*
    Day-2
    problem link:https://leetcode.com/problems/intersection-of-two-arrays-ii/description/?envType=daily-question&envId=2024-07-02
    Time Complexity: O(NLogN+MLogM+N+M)
    Space Complexity:


*/


class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        int lena = a.size();
        int lenb = b.size();

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        vector<int>ans;
        int i = 0, j = 0;
        while(i<lena && j<lenb){
            if(a[i]<b[j]){
                i++;
            }
            else if(a[i]>b[j]){
                j++;
            }
            else{
                ans.push_back(a[i]);
                i++,j++;
            }
        }
        return ans;
    }
};
