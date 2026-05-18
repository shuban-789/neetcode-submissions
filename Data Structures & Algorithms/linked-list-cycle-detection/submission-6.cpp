/*
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
    bool hasCycle(ListNode* head) {
        set<int> hashset = {};
        auto current = head;
        while (current != nullptr) {
            if (current->next == nullptr) {
                break;
            }
            if (hashset.contains(current->val)) {
                return true;
            } else {
                hashset.insert(current->val);
            }
            current = current->next;
        }
        return false;
    }
};
