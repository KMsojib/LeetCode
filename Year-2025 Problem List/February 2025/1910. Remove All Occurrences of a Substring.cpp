/*
# Problem          : 1910. Remove All Occurrences of a Substring
# Time Complexity  : 
# C++ Solution
*/

class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos;
        while ((pos = s.find(part)) != std::string::npos) {
            s.erase(pos, part.length());
        }
        return s;
    }
};