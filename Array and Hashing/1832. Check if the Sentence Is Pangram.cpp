/*
# Problem          : 1832. Check if the Sentence Is Pangram
# Time Complexity  : O(n)
# space Complexity : O(26) maybe constant
# C++ Solution
*/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;
        for (auto sent : sentence) {
            st.insert(sent);
        }
        return (st.size() == 26 ? true : false);
    }
};
