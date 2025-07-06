/*
# Problem          : 1865. Finding Pairs With a Certain Sum
# C++ Solution
*/

/* Brute Forces */
// TLE 
class FindSumPairs {
public:
    vector<int> vp1, vp2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        vp1.clear();
        vp2.clear();
        vp1 = nums1;
        vp2 = nums2;
    }

    void add(int index, int val) { vp2[index] += val; }

    int count(int tot) {
        int cnt = 0;
        for (int i = 0; i < vp1.size(); i++) {
            for (int j = 0; j < vp2.size(); j++) {
                if (vp1[i] + vp2[j] == tot) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */

class FindSumPairs {
private:
    vector<int> nums1, nums2;
    unordered_map<int, int> cnt;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for (int num : nums2) {
            ++cnt[num];
        }
    }

    void add(int index, int val) {
        --cnt[nums2[index]];
        nums2[index] += val;
        ++cnt[nums2[index]];
    }

    int count(int tot) {
        int ans = 0;
        for (int num : nums1) {
            int rest = tot - num;
            if (cnt.count(rest)) {
                ans += cnt[rest];
            }
        }
        return ans;
    }
};