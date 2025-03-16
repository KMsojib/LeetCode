# Problem          : 2594. Minimum Time to Repair Cars
# Time Complexity  : O(n⋅log(m⋅max_rank))
# C++ Solution

class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        auto count_repaired = [&](long long time) -> long long {
            long long cnt = 0;
            for (auto rank : ranks) {
                cnt += static_cast<int>(std::sqrt(time / rank));
            }
            return cnt;
        };

        long long left = 0, right = 1ll * ranks[0] * cars * cars;
        long long res = -1;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long repaired = count_repaired(mid);

            if (repaired >= cars) {
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return res;
    }
};