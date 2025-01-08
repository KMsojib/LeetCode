# Problem          : 2070. Most Beautiful Item for Each Query
# Time Complexity  : 
# Python Solution

""" ------------------------------------------Brute Forces Solution ------------------------------------------ """
class Solution:
    def maximumBeauty(self, items: List[List[int]], queries: List[int]) -> List[int]:
        ans = []
        n = len(items)
        m = len(queries)

        for i in range(m):
            res = 0
            for j in range(n):
                if items[j][0] <= queries[i]:
                    res = max(res, items[j][1])
            ans.append(res)

        return ans

def main():
    items = [[1, 2], [3, 2], [2, 4], [5, 6], [3, 5]]
    queries = [1, 2, 3, 4, 5, 6]
    solution = Solution()
    result = solution.maximumBeauty(items, queries)
    print(result)

if __name__ == "__main__":
    main()

""" ------------------------------------------Optimal Solution ------------------------------------------ """

class Solution:
    def maximumBeauty(self, items: List[List[int]], queries: List[int]) -> List[int]:
        items.sort()
        queries = sorted([(q, i) for i, q in enumerate(queries)])
        res = [0]*len(queries)
        max_beauty = 0
        idx = 0
        for q,i in queries:
            while idx < len(items) and items[idx][0] <= q:
                max_beauty = max(max_beauty,items[idx][1])
                idx += 1
            res[i] = max_beauty
        return res

def main():
    items = [[1, 2], [3, 2], [2, 4], [5, 6], [3, 5]]
    queries = [1, 2, 3, 4, 5, 6]
    solution = Solution()
    result = solution.maximumBeauty(items, queries)
    print(result)

if __name__ == "__main__":
    main()