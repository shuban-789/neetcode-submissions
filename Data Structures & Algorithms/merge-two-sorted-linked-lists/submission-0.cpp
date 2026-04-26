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
        ListNode dummy(0);
        ListNode* tail = &dummy;

        ListNode* current1 = list1;
        ListNode* current2 = list2;

        while (current1 != nullptr && current2 != nullptr) {
            if (current1->val <= current2->val) {
                tail->next = current1;
                current1 = current1->next;
            } else {
                tail->next = current2;
                current2 = current2->next;
            }

            tail = tail->next;
        }

        if (current1 != nullptr) {
            tail->next = current1;
        } else {
            tail->next = current2;
        }

        return dummy.next;
    }
};