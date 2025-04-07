# Creating node
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# Q1: Find the middle of the linked list.
# Time Complexity: O(N)
# Space Complexity: O(1)
class Solution:
    def middleOfLinkedList(self, head):
        slow,fast = head,head
        while fast and fast.next:
            slow = fast.next
            fast = fast.next.next
        return True

# Q2: Determine if a linkedList has a Cycle or not.
# Time Complexity : O(N)
# Space Complexity : O(1)

class Cycle: 
    def hasCycle(self,head):
        slow,fast = head,head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            
            # Check slow == fast or not
            if slow == fast:
                return True 
        return False

def main():
    # Creating linked list
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)
    head.next.next.next.next.next = ListNode(1)
    
    # Middle of linkedList
    # solution = Solution()
    # ok = solution.middleOfLinkedList(head)
    # print(ok)
    
    # Has a Cycle or not
    cycle = Cycle()
    ok = cycle.hasCycle(head)
    if ok == True:
        print("Linked List has Cycle")
    else:
        print("LinedList has not Cycle")

if __name__ == "__main__":
    main()