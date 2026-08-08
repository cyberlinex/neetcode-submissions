/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
#include <unordered_map>
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> mp;
        Node* cur = head;

        while(cur!=nullptr){
            Node* node1 = new Node(cur->val);
            mp[cur] = node1;
            cur = cur ->next;
        }

        cur = head;

        while(cur!=nullptr){
            mp[cur]->next = mp[cur->next];
            mp[cur]->random = mp[cur->random];
            cur = cur->next;
        }

        return mp[head];
        
        
    }
};