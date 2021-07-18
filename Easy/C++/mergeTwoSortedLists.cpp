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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr && l2 == nullptr) return nullptr;

        ListNode* solution = new ListNode();
        ListNode* i = solution;

        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                i->val = l1->val;
                l1 = l1->next;
            }
            else {
                i->val = l2->val;
                l2 = l2->next;
            }
            i->next = new ListNode();
            i = i->next;
        }

        if (l1 != nullptr) {
            while (l1->next != nullptr) {
                i->val = l1->val;
                l1 = l1->next;
                i->next = new ListNode();
                i = i->next;
            }
            i->val = l1->val;
        }
        else if (l2 != nullptr) {
            while (l2->next != nullptr) {
                i->val = l2->val;
                l2 = l2->next;
                i->next = new ListNode();
                i = i->next;
            }
            i->val = l2->val;
        }
        else i = nullptr;
        return solution;
    }
};