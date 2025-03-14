class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long maxi_candy = 0;
        for (auto candy : candies) {
            maxi_candy = max(maxi_candy, 1ll * candy);
        }

        long long left = 0, right = maxi_candy;

        while (left < right) {
            int mid = (left + right + 1) / 2;
            if (_can_allocate_candies(candies, k, mid)) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }

    bool _can_allocate_candies(vector<int>& candies, long long k,
                               long long num_of_candies) {
        long long max_num_of_children = 0;
        for (auto candy : candies) {
            max_num_of_children += (candy / num_of_candies);
        }
        return max_num_of_children >= k;
    }
};