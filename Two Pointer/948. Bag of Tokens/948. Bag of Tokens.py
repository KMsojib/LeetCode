# Problem          : 948. Bag of Tokens
# Time Complexity  : O(n log n)
# Space Complexity : O(1)
# C++ / Python Solution

class Solution:
    def bagOfTokensScore(self, tokens: List[int], power: int) -> int:
        n = len(tokens)
        score, maxScore, l, r = 0, 0, 0, n - 1
        
        tokens.sort()
        while l <= r:
            if tokens[l] <= power:
                score += 1
                power -= tokens[l]
                l += 1
                maxScore = max(maxScore, score)
            elif score > 0:
                power += tokens[r]
                score -= 1
                r -= 1
            else:
                break
        return maxScore