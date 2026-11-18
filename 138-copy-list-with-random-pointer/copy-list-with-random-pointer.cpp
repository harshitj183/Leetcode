class Solution {
public:
    Node* copyRandomList(Node* head) {

        unordered_map<Node*, Node*> mp;

        if (!head) {
            return NULL;
        }

        Node* curr = head;
        Node* prev = NULL;
        Node* newHead = NULL;

        // Pass 1: Create cloned nodes and connect next

        while (curr != NULL) {

            Node* temp = new Node(curr->val);

            mp[curr] = temp;

            if (newHead == NULL) {
                newHead = temp;
                prev = temp;
            }
            else {
                prev->next = temp;
                prev = temp;
            }

            curr = curr->next;
        }

        // Pass 2: Connect random pointers

        curr = head;
        Node* newCurr = newHead;

        while (curr != NULL) {

            newCurr->random = mp[curr->random];

            curr = curr->next;
            newCurr = newCurr->next;
        }

        return newHead;
    }
};