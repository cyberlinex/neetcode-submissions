# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:

        ans = 0 

        def recur(root):
            nonlocal ans

            if root is None:
                return 0

            cleft = recur(root.left)
            cright = recur(root.right)


            ans = max(ans,cleft+cright)


            return max(cleft,cright)+1

        recur(root)
        return ans



            
        
