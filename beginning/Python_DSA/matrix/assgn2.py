class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def add_node(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        cur = self.head
        while cur.next:
            cur = cur.next
        cur.next = new_node

    def print_list(self):
        cur = self.head
        while cur:
            print(cur.data, end=' -> ' if cur.next else '\n')
            cur = cur.next

    def delete_nth_node(self, n):
        if n < 1:
            raise ValueError("Index 1 or greater")
        if not self.head:
            raise IndexError("can't delete from empty list")
        if n == 1:
            self.head = self.head.next
            return
        prev = None
        cur = self.head
        count = 1
        while cur and count < n:
            prev = cur
            cur = cur.next
            count += 1
        if not cur:
            raise IndexError("Index out of range")
        prev.next = cur.next

ll = LinkedList()
ll.add_node(10)
ll.add_node(110)
ll.add_node(38)
ll.add_node(4)
ll.print_list()

try:
    ll.delete_nth_node(2)
except Exception as e:
    print(e)

ll.print_list()

try:
    ll.delete_nth_node(10)
except Exception as e:
    print(e)

try:
    empty_list = LinkedList()
    empty_list.delete_nth_node(1)
except Exception as e:
    print(e)
