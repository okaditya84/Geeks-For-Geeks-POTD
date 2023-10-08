class Solution:
    def sortedInsert(self, head1, key):
        new_node = Node(key)
        if head1 is None:
            head1 = new_node
            return head1
        if key < head1.data:
            new_node.next = head1
            head1 = new_node
            return head1
        curr = head1
        while curr.next is not None and curr.next.data < key:
            curr = curr.next
        new_node.next = curr.next
        curr.next = new_node
        return head1
