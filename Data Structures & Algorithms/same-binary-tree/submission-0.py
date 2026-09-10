# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        def recur(root: TreeNode,result: List) -> List:

            if root is None:
                result.append(None)
                return 

            result.append(root.val)
            recur(root.left,result)
            recur(root.right,result)

            return result

        result1 = []
        result2 = []

        return recur(p,result1)==recur(q,result2)

             

            
        