/*
    Problem linK: 
    Type: Easy
    Topic: Grapg
    
*/

/*Using extra sapce and time:
TC: O(N)
SP: O(N)


class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> mp;
        for (int i = 0; i < edges.size(); i++) {
            vector<int> vp = edges[i];
            mp[vp[0]]++;
            mp[vp[1]]++;
        }

        int n = edges.size() + 1;
        int ans = 0, connected = n - 1;
        for (auto [x, y] : mp) {
            if (y == connected) {
                ans = x;
                break;
            }
        }
        return ans;
    }
};

*/
/*
    Optimal way:
    TC: O(1)
    SC: O(1)

*/
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> firstEdge = edges[0];
        vector<int> secondEdge = edges[1];

        return (firstEdge[0] == secondEdge[0] || firstEdge[0] == secondEdge[1]) ? firstEdge[0] : firstEdge[1];
    }
};
