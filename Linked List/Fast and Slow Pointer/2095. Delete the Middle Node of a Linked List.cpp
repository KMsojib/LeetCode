# Problem          : 2095. Delete the Middle Node of a Linked List
# Time Complexity  : O(N)
# C++ / Python Solution

================================================= C++ =================================================
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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return nullptr;
        }

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* temp = slow;

        while (fast && fast->next) {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        temp->next = slow->next;
        slow->next = NULL;
        delete slow;
        return head;
    }
};