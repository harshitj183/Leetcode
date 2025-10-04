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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* current1 = l1;
        ListNode* current2 = l2;
        ListNode* lind2 = NULL;    
        ListNode* tail = NULL;   
        int s = 0;
        int carry = 0;

        while (current1 != NULL || current2 != NULL || carry != 0) {

            s = carry;

            if (current1 != NULL) {
                s += current1->val;
                current1 = current1->next;
            }

            if (current2 != NULL) {
                s += current2->val;
                current2 = current2->next;
            }

            if (s <= 9) {
                carry = 0;
            } else {
                carry = 1;
                s = s - 10;
            }

            ListNode* newNode = new ListNode(s);

            if (lind2 == NULL) {
                lind2 = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return lind2;
    }
};
