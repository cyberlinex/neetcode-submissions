#include <unordered_map>
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        unordered_map<int, ListNode*> mp;
        ListNode* back = head;
        int i = 0;

        while (back != nullptr) {
            mp[i++] = back;
            back = back->next;
        }

        int j = 0, k = i - 1;

        while (j < k) {
            mp[j]->next = mp[k];
            j++;

            if (j == k) break;   // 🔑 prevent self-loop

            mp[k]->next = mp[j];
            k--;
        }

        mp[j]->next = nullptr;  // 🔑 proper termination
    }
};
