/*
    Problem: 496. Next Greater Element I
    Time Complexity: (O(n + m))
    Space Complexity: O(N)
    C++ Solution
*/

// Brute Force Solution Time Complexity: O(n * m)

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = (int)nums1.size(), m = (int)nums2.size();
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < m; i++) {
            mp[nums2[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            bool f = false;
            for (int j = mp[nums1[i]] + 1; j < m; j++) {
                if (nums2[j] > nums1[i]) {
                    ans.push_back(nums2[j]);
                    f = true;
                    break;
                }
            }
            if (!f) {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};

//optimized approach is (O(n + m))
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> s;

        for (int i = nums2.size() - 1; i >= 0; --i) {
            while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }
            nextGreater[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }

        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }

        return result;
    }
};