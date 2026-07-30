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
    void reorderList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return;

        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {

            // Find last node and its previous node
            ListNode* prev = nullptr;
            ListNode* last = curr;

            while (last->next != nullptr) {
                prev = last;
                last = last->next;
            }

            // If only one node left
            if (curr == last || curr->next == last)
                break;

            // Remove last node
            prev->next = nullptr;

            // Insert last after current
            last->next = curr->next;
            curr->next = last;

            // Move to next original node
            curr = last->next;
        }
    }
};