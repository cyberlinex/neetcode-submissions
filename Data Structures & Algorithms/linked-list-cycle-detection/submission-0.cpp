/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<unordered_set>
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        ListNode* temp2 = head;
        while(temp2!=nullptr && temp2->next != nullptr){
            temp = temp->next;
            temp2 = temp2->next->next;
            if(temp2==temp)
                return true;


        }

        return false;
        
    }
};