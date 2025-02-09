/*
Brute Forces Solution
Time Complexity: O(N^2)
Space Complexity: O(N)
*/
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = (int)nums.size();
        long long count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (j - i != nums[j] - nums[i]) {
                    count++;
                }
            }
        }
        return count;
    }
};

/*
Optimized one
Time Complexity: O(N)
Space Complexity: O(N)
*/
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        unordered_map<long long, long long> countMap;
        long long goodPairs = 0;
        for (int i = 0; i < n; ++i) {
            long long key = nums[i] - i;
            if (countMap.find(key) != countMap.end()) {
                goodPairs += countMap[key];
            }
            countMap[key]++;
        }

        long long totalPairs = n * (n - 1) / 2;

        return totalPairs - goodPairs;
    }
};


#Python Solution
class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        n = len(nums)
        HashMap = defaultdict(int)
        good_pairs = 0

        for i in range(n):
            key = nums[i] - i
            good_pairs += HashMap[key]
            HashMap[key] += 1

        total_pairs = n * (n - 1) // 2

        return total_pairs - good_pairs

#Runtime 83 ms Beats 51.19 %

/*
Explanation:
    1. Using a HashMap: We use an unordered_map to store the counts of each value of nums[i] - i. This helps in quickly finding the number of good pairs.
    2. Counting Good Pairs: For each element in the array, we calculate the key as nums[i] - i.
        We then check if this key is already in the hashmap, which means there are previously encountered elements that form good pairs with the current element.
        We add the count of these good pairs to goodPairs.
    3. Updating the HashMap: We then update the hashmap to include the current element's key.
        Calculating Total Pairs: The total number of pairs in the array of size n is given by the formula n * (n - 1) / 2.
    4. Calculating Bad Pairs: Finally, the number of bad pairs is the difference between the total pairs and the good pairs.

*/