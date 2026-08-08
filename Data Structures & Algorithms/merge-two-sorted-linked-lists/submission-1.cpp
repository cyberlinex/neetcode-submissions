/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        ListNode* head = nullptr;
        if(list1==nullptr) return list2;
        else if(list2==nullptr) return list1;
        if(curr1->val>curr2->val){
            head = curr2;
            curr2 = curr2->next;
        }
        else if(curr1->val<curr2->val){
             head = curr1;
             curr1 = curr1->next;
        }
        else{
             head = curr1;
             curr1 = curr1->next;
        }
        ListNode* curr3 = head;
        while(curr1!=nullptr&&curr2!=nullptr){
            if(curr1->val>curr2->val){
                curr3->next=curr2;
                curr3 = curr3->next;
                curr2 = curr2->next;
            }
            else if(curr1->val<curr2->val){
                curr3->next=curr1;
                curr3 = curr3->next;
                curr1 = curr1->next;
            }
            else{
                curr3->next=curr1;
                curr3 = curr3->next;   
                curr1 = curr1->next;
            }
        }
        while(curr1){
            curr3->next=curr1;
            curr3 = curr3->next;
            curr1 = curr1->next;
        }
        while(curr2){
            curr3->next=curr2;
            curr3 = curr3->next;
            curr2 = curr2->next;
        }
        return head;
    }
};