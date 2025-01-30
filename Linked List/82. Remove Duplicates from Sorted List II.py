# Problem          : 82. Remove Duplicates from Sorted List II
# Time Complexity  : O(n)
# Python Solution

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head
        prev = dummy
        curr = head

        while curr:
            if curr.next and curr.val == curr.next.val:
                while curr.next and curr.val == curr.next.val:
                    curr = curr.next
                    prev.next = curr.next
            else:
                prev = prev.next
            curr = curr.next
        return dummy.next

def main():
    head = ListNode(1)
    head.next = ListNode(1)
    head.next.next = ListNode(2)
    head.next.next.next = ListNode(3)
    head.next.next.next.next = ListNode(3)
    
    solution = Solution()
    remove_duplicates_head = solution.deleteDuplicates(head)
    
    while remove_duplicates_head:
        print(remove_duplicates_head.val, end=" ")
        remove_duplicates_head = remove_duplicates_head.next   

if __name__ == "__main__":
    main()