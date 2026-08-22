/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     listNode *next;
 *     listNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                ListNode* n1 = head;
                while (n1 != slow) {
                    n1 = n1->next;
                    slow = slow->next;
                }
                return n1;
            }
        }
        return NULL;
    }
};
