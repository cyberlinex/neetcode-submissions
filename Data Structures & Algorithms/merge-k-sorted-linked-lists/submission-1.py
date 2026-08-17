# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:

    def Merge(self,list1 : ListNode,list2 : ListNode):
        dummy = ListNode(0,None)
        curr = dummy

        while list1 and list2:
            if list1.val >= list2.val:
                curr.next = list2
                list2 = list2.next
            else:
                curr.next = list1
                list1 = list1.next
            
            curr = curr.next

        curr.next = list1 if list1 else list2

        return dummy.next
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        
        while len(lists)>1:
            merged = []
            for i in range(0,len(lists),2):
                list1 = lists[i]
                list2 = lists[i+1] if i+1 < len(lists) else None
                merged.append(self.Merge(list1,list2))

            lists = merged

        return lists[0] if lists else None 





        