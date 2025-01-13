# Problem          : 3223. Minimum Length of String After Operations
# Time Complexity  : O(N)
# C++ Solution

// Using Hashmap
class Solution {
public:
    int minimumLength(string s) {
        map<char, int> mp;
        int cnt = 0;
        for (auto ch : s) {
            mp[ch]++;
            if (mp[ch] >= 3) {
                mp[ch] -= 2;
            }
        }

        for (auto [x, y] : mp) {
            cnt += y;
        }
        return cnt;
    }
};

// using frequency Array
class Solution {
public:
    int minimumLength(string s) {
        int totalLenght = 0;
        vector<int> frequency(26, 0);
        for (auto ch : s) {
            frequency[ch - 'a']++;
        }
        for (auto freq : frequency) {
            if (freq == 0)
                continue;
            if (freq % 2 == 0) {
                totalLenght += 2;
            } else {
                totalLenght += 1;
            }
        }
        return totalLenght;
    }
};