# Problem          : 2379. Minimum Recolors to Get K Consecutive Black Blocks
# Time Complexity  : O(N)
# Python Solution

class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        left = 0
        num_white = 0
        num_recolors = float("inf")

        for right in range(len(blocks)):
            if blocks[right] == "W":
                num_white += 1

            if right - left + 1 == k:
                num_recolors = min(num_recolors, num_white)

                if blocks[left] == "W":
                    num_white -= 1
                left += 1
        return num_recolors
