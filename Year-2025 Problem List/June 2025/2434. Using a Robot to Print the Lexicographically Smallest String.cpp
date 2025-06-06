# Problem          : 2434. Using a Robot to Print the Lexicographically Smallest String
# Time Complexity  : O(n + sum(all steps in stack))
# space Complexity : O(n)
# C++ / Python Solution

class Solution {
public:
    string robotWithString(string s) {
        unordered_map<char, int> mp;
        for (auto ch : s) {
            mp[ch]++;
        }

        stack<char> st;
        string res = "";
        char minCharacter = 'a';
        for (auto ch : s) {
            st.push(ch);
            mp[ch]--;
            while (minCharacter != 'z' && mp[minCharacter] == 0) {
                minCharacter++;
            }

            while (!st.empty() && st.top() <= minCharacter) {
                res.push_back(st.top());
                st.pop();
            }
        }
        return res;
    }
};