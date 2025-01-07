# Problem: 1408. String Matching in an Array
# Time Complexity: O(N)
# Space Complexity : O(1)

# Brute Forces Solution
class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        ans = []
        for i in range(len(words)):
            for j in range(len(words)):
                if i != j and words[i].find(words[j]) != -1:
                    if words[j] not in ans:
                        ans.append(words[j])
        return ans

# Using Set
class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        ans = set()
        for i in range(len(words)):
            for j in range(len(words)):
                if i != j and words[i].find(words[j]) != -1:
                    ans.add(words[j])
        return list(ans)

solution = Solution()
words = ["mass", "as", "hero", "superhero"]
print(solution.stringMatching(words)) 