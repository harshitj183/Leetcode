// Last updated: 5/2/2026, 11:27:08 pm
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
            ListNode* fast = head;

         
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
                fast = fast->next->next;
        }

        return slow;  
    }
};
