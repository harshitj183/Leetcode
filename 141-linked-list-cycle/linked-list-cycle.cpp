

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;              // move slow 1 step
            fast = fast->next->next;        // move fast 2 steps

            if (slow == fast) {
                return true;                // cycle detected
            }
        }

        return false;                       // no cycle
    }
};
