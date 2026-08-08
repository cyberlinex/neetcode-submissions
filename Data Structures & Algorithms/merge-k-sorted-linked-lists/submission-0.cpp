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
 #include <queue>
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<
        int,
        vector<int>,
        greater<int>>  pq;

        for(auto x : lists){
            if(x==nullptr) continue;
            else if(x->next==nullptr) {
                pq.push(x->val);
                continue;
            }
            while(x!=nullptr ){
                pq.push(x->val);
                x=x->next;
            }
        }
        if (pq.empty()) return nullptr;
        int temp = pq.top();
        pq.pop();
        ListNode* head = new ListNode(temp);
        ListNode* point = head;
        if (pq.empty()) return head;
        int n = pq.size();
        for(int i =0;i<n-1;i++){
            temp = pq.top();
            pq.pop();
            ListNode* node = new ListNode(temp);
            point->next = node;
            point = point->next;
        }
        temp = pq.top();
        pq.pop();
        ListNode* node = new ListNode(temp);
        point->next = node;
        node->next = nullptr;
        

        return head;
    }
};