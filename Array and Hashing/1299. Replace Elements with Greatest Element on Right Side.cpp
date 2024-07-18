/*
    problem explanation:
    Input: arr = [17,18,5,4,6,1]
    Output: [18,6,6,6,1,-1]

    17 -> [18,5,4,6,1] -> max - 18
    18 -> [5,4,6,1] -> max - 6
    5 ->  [4,6,1] -> max - 6
    4 ->  [6,1] -> max - 6
    6 ->  [1] -> max - 1
    1 ->  [-1] - no max

*/
/*
    Time Complexity:In wores case *max_element take O(n)time.
    so overall time compelxity : O(N*N) = O(N^2)
    Space Complexity: O(N)

*/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        if(n==1){
            return {-1};
        }
        vector<int>ans;
        for(int i=1;i<n;i++){
            ans.push_back(*max_element(arr.begin()+i,arr.end()));
        }
        ans.push_back(-1);
        return ans;
    }
};

/* Optimiseed code */