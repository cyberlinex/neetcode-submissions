# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        
        boolean = True
        def recur(root):
            nonlocal boolean

            if root is None:
                return 0

            cleft = recur(root.left)
            cright = recur(root.right)

            if abs(cleft-cright) >1:
                boolean = False

            return max(cleft,cright)+1


        recur(root)
        return boolean
        