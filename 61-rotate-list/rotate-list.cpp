class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // Edge cases
        if (!head || !head->next || k == 0) return head;

        // Step 1: Find length and tail
        int n = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            n++;
        }

        // Step 2: Effective rotation
        k = k % n;
        if (k == 0) return head;

        // Step 3: Find new tail: (n - k - 1)th node
        int stepsToNewTail = n - k - 1;
        ListNode* newTail = head;
        for (int i = 0; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }

        // Step 4: New head is next of newTail
        ListNode* newHead = newTail->next;

        // Step 5: Break and connect
        newTail->next = nullptr;
        tail->next = head;

        return newHead;
    }
};
