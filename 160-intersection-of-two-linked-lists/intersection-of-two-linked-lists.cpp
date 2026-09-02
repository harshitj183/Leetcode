class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        for (ListNode* a = headA; a != nullptr; a = a->next) {

            for (ListNode* b = headB; b != nullptr; b = b->next) {

                if (a == b)
                    return a;
            }
        }

        return nullptr;
    }
};