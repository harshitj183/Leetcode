// Last updated: 5/2/2026, 11:28:43 pm
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
                      ListNode* prev = nullptr;
        ListNode* curr = head;

                      while (curr != nullptr) {
            ListNode* next = curr->next;  
            curr->next = prev;            
         prev = curr;                
            curr = next;                 
        }

                     return prev;  
    }
};
