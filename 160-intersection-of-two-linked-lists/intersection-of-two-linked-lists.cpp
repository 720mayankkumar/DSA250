/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
   ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    if(headA == NULL || headB == NULL) return NULL;

    ListNode* a = headA;
    ListNode* b = headB;

    // Move both pointers until they meet
    while(a != b) {
        // If a reaches end, jump to headB
        a = (a == NULL) ? headB : a->next;
        // If b reaches end, jump to headA
        b = (b == NULL) ? headA : b->next;
    }

    // Either intersection node or NULL
    return a;
}

};