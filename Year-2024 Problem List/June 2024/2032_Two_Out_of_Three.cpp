#include <bits/stdc++.h>
using namespace std;

vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
{
    int n = nums1.size();
    int m = nums2.size();
    int k = nums3.size();
    map<int, vector<int>> vp;

    for (int i = 0; i < n; i++)
    {
        if (count(vp[nums1[i]].begin(), vp[nums1[i]].end(), nums1[i]) == 0)
        {
            vp[nums1[i]].push_back(1);
        }
    }

    for (int j = 0; j < m; j++)
    {
        if (count(vp[nums2[2]].begin(), vp[nums2[2]].end(), nums2[2]) == 0)
        {
            vp[nums2[j]].push_back(2);
        }
    }

    for (int l = 0; l < k; l++)
    {
        if (count(vp[nums3[3]].begin(), vp[nums3[3]].end(), nums3[3]) == 0)
        {
            vp[nums3[l]].push_back(3);
        }
    }

    vector<int> ans = {};
    for (auto it : vp)
    {
        int temp = 0;
        for (auto x : it.second)
        {
            temp += x;
        }

        if (temp == 6 or temp == 3 or temp == 5 or temp == 4)
        {
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main()
{
    vector<int> nums1 = {1, 2, 2};
    vector<int> nums2 = {4, 3, 3};
    vector<int> nums3 = {5};

    vector<int> ans = twoOutOfThree(nums1, nums2, nums3);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}



