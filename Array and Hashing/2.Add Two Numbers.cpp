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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* temp = result;
        int carry = 0;
        while (l1 != nullptr or l2 != nullptr or carry) {
            int sum = 0;
            sum += (l1 != nullptr) ? l1->val : 0;
            sum += (l2 != nullptr) ? l2->val : 0;

            sum += carry;
            carry = sum / 10;

            ListNode* newnode = new ListNode(sum % 10);
            temp->next = newnode;
            temp = temp->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        return result->next;
    }
};