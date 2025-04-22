# Problem          : 1441. Build an Array With Stack Operations
# Time Complexity  : O(N)
# C++ / Python Solution

================================= CPP ========================================
class Solution {
public:
    vector<string> buildArray(vector<int>& targets, int n) {
        vector<string> ans;
        int i = 0;

        for (auto target : targets) {
            while (i < target - 1) {
                ans.push_back("Push");
                ans.push_back("Pop");
                i += 1;
            }
            ans.push_back("Push");
            i += 1;
        }
        return ans;
    }
};

=============================== Python ========================================
class Solution:
    def buildArray(self, targets: List[int], n: int) -> List[str]:
        ans = []
        i = 0

        for target in targets:
            while i < target - 1:
                ans.append("Push")
                ans.append("Pop")
                i += 1
            
            ans.append("Push")
            i += 1
        return ans