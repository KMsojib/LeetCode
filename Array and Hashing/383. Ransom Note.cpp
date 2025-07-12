/*
# Problem          : 383. Ransom Note
# Time Complexity  : O(n)
# space Complexity : O(n)
# C++ Solution
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mp;
        for (auto magazin : magazine) {
            mp[magazin]++;
        }
        bool ok = true;
        for (auto ranNote : ransomNote) {
            if (mp[ranNote] == 0) {
                ok = false;
                break;
            } else {
                mp[ranNote]--;
            }
        }
        return ok;
    }
};