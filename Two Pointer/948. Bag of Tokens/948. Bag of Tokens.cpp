# Problem          : 948. Bag of Tokens
# Time Complexity  : O(nlogn)
# C++ / Python Solution

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = (int)tokens.size();
        int l = 0, r = n - 1;
        int score = 0, maxScore = 0;

        sort(tokens.begin(), tokens.end());
        while (l <= r) {
            if (tokens[l] <= power) {
                score += 1;
                power -= tokens[l];
                l += 1;
                maxScore = max(maxScore, score);
            } else if (tokens[l] > power && score > 0) {
                score -= 1;
                power += tokens[r];
                r -= 1;
            } else {
                break;
            }
        }
        return max(maxScore, score);
    }
};
// Time Complexity : O(nlogn)
// Space Complexity : O(1)