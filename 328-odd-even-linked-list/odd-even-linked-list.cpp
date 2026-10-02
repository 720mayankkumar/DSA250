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
    ListNode* oddEvenList(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        vector<int> v;

        ListNode* t1 = head;

        while (t1 != NULL) {
            v.push_back(t1->val);
            t1 = t1->next;
        }

        vector<int> ans;

        for (int i = 0; i < v.size(); i += 2) {
            ans.push_back(v[i]);
        }

        for (int i = 1; i < v.size(); i += 2) {
            ans.push_back(v[i]);
        }

        t1 = head;

        for (int i = 0; i < ans.size(); i++) {
            t1->val = ans[i];
            t1 = t1->next;
        }

        return head;
    }
};

