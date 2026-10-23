#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class CLL {
    Node* head = nullptr;

public:
    void insertFirst(int x) {
        Node* n = new Node(x);

        if (head == nullptr) {
            head = n;
            n->next = head;
            return;
        }

        Node* t = head;
        while (t->next != head)
            t = t->next;

        n->next = head;
        t->next = n;
        head = n;
    }

    void insertLast(int x) {
        Node* n = new Node(x);

        if (head == nullptr) {
            head = n;
            n->next = head;
            return;
        }

        Node* t = head;
        while (t->next != head)
            t = t->next;

        t->next = n;
        n->next = head;
    }

    void insertBefore(int key, int x) {
        if (head == nullptr) {
            cout << "Node not found\n";
            return;
        }

        Node* t = head;

        if (head->data == key) {
            insertFirst(x);
            return;
        }

        while (t->next != head && t->next->data != key)
            t = t->next;

        if (t->next == head) {
            cout << "Node not found\n";
            return;
        }

        Node* n = new Node(x);
        n->next = t->next;
        t->next = n;
    }

    void insertAfter(int key, int x) {
        if (head == nullptr) {
            cout << "Node not found\n";
            return;
        }

        Node* t = head;

        do {
            if (t->data == key) {
                Node* n = new Node(x);
                n->next = t->next;
                t->next = n;
                return;
            }
            t = t->next;
        } while (t != head);

        cout << "Node not found\n";
    }

    void deleteNode(int key) {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* curr = head;
        Node* prev = nullptr;

        do {
            if (curr->data == key)
                break;

            prev = curr;
            curr = curr->next;
        } while (curr != head);

        if (curr->data != key) {
            cout << "Node not found\n";
            return;
        }

        // Only one node
        if (curr->next == head && curr == head) {
            delete curr;
            head = nullptr;
            cout << "Node deleted\n";
            return;
        }

        // Deleting the head
        if (curr == head) {
            Node* last = head;
            while (last->next != head)
                last = last->next;

            head = head->next;
            last->next = head;
        } else {
            prev->next = curr->next;
        }

        delete curr;
        cout << "Node deleted\n";
    }

    void search(int key) {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* t = head;
        int pos = 1;

        do {
            if (t->data == key) {
                cout << "Found at position " << pos << '\n';
                return;
            }

            t = t->next;
            pos++;
        } while (t != head);

        cout << "Node not found\n";
    }

    void display() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* t = head;

        do {
            cout << t->data << " -> ";
            t = t->next;
        } while (t != head);

        cout << "(back to head: " << head->data << ")\n";
    }
};

int main() {
    CLL list;
    int ch, x, key;

    do {
        cout << "\n--- CIRCULAR LINKED LIST ---\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert before a node\n";
        cout << "4. Insert after a node\n";
        cout << "5. Delete a node\n";
        cout << "6. Search a node\n";
        cout << "7. Display list\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            list.insertFirst(x);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> x;
            list.insertLast(x);
            break;

        case 3:
            cout << "Enter existing node and new value: ";
            cin >> key >> x;
            list.insertBefore(key, x);
            break;

        case 4:
            cout << "Enter existing node and new value: ";
            cin >> key >> x;
            list.insertAfter(key, x);
            break;

        case 5:
            cout << "Enter value to delete: ";
            cin >> key;
            list.deleteNode(key);
            break;

        case 6:
            cout << "Enter value to search: ";
            cin >> key;
            list.search(key);
            break;

        case 7:
            list.display();
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }
    } while (ch != 0);

    return 0;
}
