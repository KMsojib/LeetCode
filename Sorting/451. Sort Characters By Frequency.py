# Problem          : 451. Sort Characters By Frequency
# Time Complexity  : O(N)
# Python Solution
class Solution:
    def frequencySort(self, s: str) -> str:
        freq = {}
        for c in s:
            freq[c] = freq.get(c, 0) + 1

        pq = []
        for c, f in freq.items():
            heapq.heappush(pq, (-f, c))

        res = ""
        while pq:
            f, c = heapq.heappop(pq)
            res += c * (-f)
        return res