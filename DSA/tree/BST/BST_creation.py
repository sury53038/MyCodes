print("Starting with Binary Search Tree")

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def insert(node, val):
    if node is None:
        return Node(val)
    
    elif(val < node.value):
        node.left = insert(node.left, val)

    else:
        node.right = insert(node.right, val)
    
    return node

arr = [6,3,17,5,11,18,2,1,20,14]

rootnode = Node(value=arr[0])

for i in arr[1:]:
    rootnode = insert(rootnode, i)

def print_tree(node):
    if node is None:
        return
    else:      
        if node.left is not None:
            print_tree(node.left)
        
        if node.right is not None:
            print_tree(node.right)
        print(f"{node.value}")


print_tree(rootnode)