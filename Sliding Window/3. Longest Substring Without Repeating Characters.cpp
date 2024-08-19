class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256, -1);
        int res = 0, left = 0, right = 0, len = 0;
        while (right < (int)s.size()) {
            if (mpp[s[right]] != -1) {
                left = max(left,mpp[s[right]]+1);
            }
            mpp[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};