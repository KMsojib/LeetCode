/*
# Problem          : 2130. Maximum Twin Sum of a Linked List
# Time Complexity  : 
# space Complexity : 
# C++ Solution
*/

// Using Extra space with Array Concepts
/*
    It took O(N) Time & O(N) Space.
    Runtime 4 ms Beats 58.77 % || Memory 143.04 MB Beats 5.27 %
*/
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> a, b;

        ListNode* curr = head;
        while (curr != nullptr) {
            a.push_back(curr->val);
            curr = curr->next;
        }

        b = a;
        reverse(b.begin(), b.end());
        int n = (int)a.size();
        int twinSum = 0;
        for (int i = 0; i < n / 2; i++) {
            twinSum = max(twinSum, (a[i] + b[i]));
        }
        return twinSum;
    }
};


// LinkedList Aproach.

