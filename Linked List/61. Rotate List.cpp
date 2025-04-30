# Problem          : 61. Rotate List
# Time Complexity  : O(n)
# C++ / Python Solution

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) {
            return head;
        }

        int len = 1;
        ListNode *newNode = head, *tail = head;
        while (tail->next) {
            tail = tail->next;
            len++;
        }

        tail->next = head; // Circular List
        k %= len;

        for (auto node = 0; node < len - k; node++) {
            tail = tail->next;
        }
        newNode = tail->next;
        tail->next = nullptr;
        return newNode;
    }
};