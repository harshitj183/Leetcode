class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* slow = &dummy;
        ListNode* fast = &dummy;

        // Move fast n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Move both until fast reaches last node
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove slow->next
        slow->next = slow->next->next;

        return dummy.next;
    }
};