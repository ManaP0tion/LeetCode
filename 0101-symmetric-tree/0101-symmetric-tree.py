# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        
        def check(leftnode, rightnode):
            if not leftnode and not rightnode:
                return True
            if not leftnode or not rightnode:
                return False

            return leftnode.val == rightnode.val and check(leftnode.left, rightnode.right) and check(leftnode.right, rightnode.left)

        return check(root.left, root.right)
