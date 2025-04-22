# Problem          : 1171. Remove Zero Sum Consecutive Nodes from Linked List
# Time Complexity  : O(N)
# Space Complexity : O(N)
# C++ / Python Solution

============================================== CPP =========================================
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        unordered_map<int, ListNode*> mp;
        int prefixSum = 0;

        for (ListNode* curr = dummy; curr != nullptr; curr = curr->next) {
            prefixSum += curr->val;
            mp[prefixSum] = curr;
        }

        prefixSum = 0;
        for (ListNode* curr = dummy; curr != nullptr; curr = curr->next) {
            prefixSum += curr->val;
            curr->next = mp[prefixSum]->next;
        }
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};

==================================== Python =========================================
class Solution:
    def removeZeroSumSublists(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head

        prefix_sum_map = {}
        prefix_sum = 0

        curr = dummy
        while curr:
            prefix_sum += curr.val
            prefix_sum_map[prefix_sum] = curr
            curr = curr.next

        prefix_sum = 0
        curr = dummy
        while curr:
            prefix_sum += curr.val
            curr.next = prefix_sum_map[prefix_sum].next
            curr = curr.next

        return dummy.next