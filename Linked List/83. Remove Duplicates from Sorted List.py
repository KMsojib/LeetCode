# Problem          : 83. Remove Duplicates from Sorted List
# Time Complexity  : O(n)
# Python Solution

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head

        while curr and curr.next:
            if curr.val == curr.next.val:
                next_next = curr.next.next
                curr.next = next_next
            else:
                curr = curr.next
        return head

def main():
    # Creating a sorted linked list with duplicates
    head = ListNode(1)
    head.next = ListNode(1)
    head.next.next = ListNode(2)
    head.next.next.next = ListNode(3)
    head.next.next.next.next = ListNode(3)

    solution = Solution()
    unique_head = solution.deleteDuplicates(head)

    print("List after removing duplicates:")
    while unique_head:
        print(unique_head.val, end=" ")
        unique_head = unique_head.next

if __name__ == "__main__":
    main()