// Last updated: 5/2/2026, 11:28:46 pm
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Dummy node banaya to handle edge case when head node needs to be deleted
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* current = dummy;
        
        while (current->next != nullptr) {
            if (current->next->val == val) {
                // Skip the node with value equal to val
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp; // memory free karna important hai
            } else {
                current = current->next;
            }
        }
        
        head = dummy->next;
        delete dummy;
        return head;
    }
};
