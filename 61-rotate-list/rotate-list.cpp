class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // get length
        int n = 0;
        ListNode* temp = head;
        while (temp) {
            n++;
            temp = temp->next;
        }

        k = k % n;

        while (k--) {
            ListNode* curr = head;
            ListNode* prev = nullptr;

            while (curr->next != nullptr) {
                prev = curr;
                curr = curr->next;
            }

            prev->next = nullptr;
            curr->next = head;
            head = curr;
        }

        return head;
    }
};