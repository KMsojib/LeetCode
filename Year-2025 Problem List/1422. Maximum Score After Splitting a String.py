# Problem          : 1422. Maximum Score After Splitting a String
# Time Complexity  : O(n)
# Python Solution

class Solution:
    def maxScore(self, s: str) -> int:
        left_zeros = 0
        right_ones = s.count("1")
        max_score = 0
        for i in range(len(s) - 1):
            if s[i] == "0":
                left_zeros += 1
            else:
                right_ones -= 1
            max_score = max(max_score, left_zeros + right_ones)
        return max_score

def main():
    # Example usage
    solution = Solution()
    s = "011101"
    result = solution.maxScore(s)
    print(f"Maximum score for the string '{s}' is: {result}")

if __name__ == "__main__":
    main()