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
    ListNode* oddEvenList(ListNode* head) {

        // Empty list ya sirf ek node
        if (head == nullptr || head->next == nullptr)
            return head;

        // Odd list ka head
        ListNode* odd = head;

        // Even list ka head
        ListNode* even = head->next;
        ListNode* evenHead = even;

        // Jab tak even aur uska next exist karta hai
        while (even != nullptr && even->next != nullptr) {

            // Next odd node ko connect karo
            odd->next = even->next;
            odd = odd->next;

            // Next even node ko connect karo
            even->next = odd->next;
            even = even->next;
        }

        // Odd list ke end me even list jod do
        odd->next = evenHead;

        return head;
    }
};