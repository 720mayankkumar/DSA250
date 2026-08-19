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
    ListNode* removeElements(ListNode* head, int val) {
        // Dummy node to handle head deletions
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp = dummy;

        while (temp->next != nullptr) {
            if (temp->next->val == val) {
                temp->next = temp->next->next; // skip the node
            } else {
                temp = temp->next; // move forward
            }
        }
        return dummy->next;
    }
};
