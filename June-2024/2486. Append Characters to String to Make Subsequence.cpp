class Solution {
public:
    int appendCharacters(string s, string t) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        int i = 0;
        int j = 0;
        while (i < t.size() && j < s.size()) {
            if (t[i] == s[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }

        return t.size() - i;
    }
};