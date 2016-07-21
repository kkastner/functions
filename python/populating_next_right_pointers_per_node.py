    def connect(self, root):
        """
        :type root: TreeLinkNode
        :rtype: nothing
        """
        if not root:
            return
        pre = root
        while root.left:
            root.left.next = root.right
            if root.next:
                root.right.next = root.next.left
                root = root.next
            else:
                root = pre.left
                pre = root