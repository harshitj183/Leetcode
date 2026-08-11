class Solution {
public:

    ListNode* swapPairs(ListNode* head) {

        if(head == nullptr) {
            return head;
        }

        if(head->next == nullptr) {
            return head;
        }

        ListNode* v1 = head;
        ListNode* v2 = head->next;

        v1->next = v2->next;
        v2->next = v1;

        v1->next = swapPairs(v1->next);

        return v2;
    }
};