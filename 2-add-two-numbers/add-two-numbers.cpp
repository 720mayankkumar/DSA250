class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        vector<int> v1;
        vector<int> v2;

        while (l1 != NULL) {
            v1.push_back(l1->val);
            l1 = l1->next;
        }

        while (l2 != NULL) {
            v2.push_back(l2->val);
            l2 = l2->next;
        }

        vector<int> ans;

        int i = 0;
        int j = 0;
        int carry = 0;

        while (i < v1.size() || j < v2.size() || carry != 0) {

            int a = 0;
            int b = 0;

            if (i < v1.size()) {
                a = v1[i];
                i++;
            }

            if (j < v2.size()) {
                b = v2[j];
                j++;
            }

            int sum = a + b + carry;

            ans.push_back(sum % 10);
            carry = sum / 10;
        }

        ListNode* l3 = new ListNode(ans[0]);
        ListNode* temp = l3;

        for (int i = 1; i < ans.size(); i++) {
            temp->next = new ListNode(ans[i]);
            temp = temp->next;
        }

        return l3;
    }
};