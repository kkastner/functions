# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    # Function to reverse the linked list. Note that this
    # function may change the head
    def reverse(self, head):
        prev = None
        current = head
        while current is not None:
            nextNode = current.next
            current.next = prev
            prev = current
            current = nextNode
        head = prev
        return head
        
    # Function to check if two input lists have same data
    def compareLists(self,head1,head2):
        temp1 = head1
        temp2 = head2
        while (temp1 and temp2):
            if temp1.val != temp2.val:
                return False
            temp1 = temp1.next
            temp2 = temp2.next
        # Both are empty, so return 1
        if temp1 is None and temp2 is None:
            return True
        # Will reach here if one list has extra elements
        return False
        
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        slowPtr,fastPtr,prevOfSlowPtr = head,head,head
        midNode = None # To handle odd-sized list
        res = True  # Initialize result
        if head is not None and head.next is not None:
            # Get the middle of the list. Move slowPtr by 1
            # and fastPtr by 2, slowPtr will have the middle node
            while fastPtr is not None and fastPtr.next is not None:
                fastPtr = fastPtr.next.next
                # We need previous of the slowPtr for
                # linked lists with odd elements
                prevOfSlowPtr = slowPtr
                slowPtr = slowPtr.next
            # fastPtr would become NULL when there are even elements in list. 
            # And not NULL for odd elements. We need to skip the middle node 
            # for odd case and store it somewhere so that we can restore the
            # original list
            if fastPtr is not None:
                midNode = slowPtr
                slowPtr = slowPtr.next
                
            # Now reverse the second half and compare it with first half
            second_half = slowPtr
            prevOfSlowPtr.next = None
            second_half = self.reverse(second_half)
            res = self.compareLists(head,second_half)
            
            # Construct original list back (optional)
            second_half = self.reverse(second_half)
            if midNode is not None:
                prevOfSlowPtr.next = midNode
                midNode.next = second_half
            else:
                prevOfSlowPtr.next = second_half
        return res