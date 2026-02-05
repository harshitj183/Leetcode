// Last updated: 5/2/2026, 11:27:15 pm
class MyLinkedList {
public:
    // Node structure
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };

    Node* head;  // starting point of linked list
    int size;    // to keep track of length

    // Constructor
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    // Get value at index
    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->val;
    }

    // Add at head
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    // Add at tail
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
        size++;
    }

    // Add at index
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        size++;
    }

    // Delete at index
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* current = head;
            for (int i = 0; i < index - 1; i++) {
                current = current->next;
            }
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        size--;
    }
};
