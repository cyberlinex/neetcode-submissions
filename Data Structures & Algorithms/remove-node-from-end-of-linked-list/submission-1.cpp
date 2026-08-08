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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        if(head->next==nullptr && n==1) return nullptr;
        ListNode* temp = head;
        int i = 0;
        while(temp!=nullptr){
            temp = temp->next;
            i++;

        }
        temp = head;
        if(i==n){
            head = head->next;
            return head;
        }
        while(i!=n+1){
            temp=temp->next;
            i--;
        }
        temp->next = temp->next->next;
        
        return head;
    }
};