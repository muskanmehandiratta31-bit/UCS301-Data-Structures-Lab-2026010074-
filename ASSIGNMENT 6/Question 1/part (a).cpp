#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;

    Node(int x) {
        data = x;
        prev = next = nullptr;
    }
};

class DLL {
    Node* head = nullptr;

public:
    void insertFirst(int x) {
        Node* n = new Node(x);
        n->next = head;

        if (head != nullptr)
            head->prev = n;

        head = n;
    }

    void insertLast(int x) {
        Node* n = new Node(x);

        if (head == nullptr) {
            head = n;
            return;
        }

        Node* t = head;
        while (t->next != nullptr)
            t = t->next;

        t->next = n;
        n->prev = t;
    }

    void insertBefore(int key, int x) {
        Node* t = head;

        while (t != nullptr && t->data != key)
            t = t->next;

        if (t == nullptr) {
            cout << "Node not found\n";
            return;
        }

        if (t == head) {
            insertFirst(x);
            return;
        }

        Node* n = new Node(x);
        n->prev = t->prev;
        n->next = t;
        t->prev->next = n;
        t->prev = n;
    }

    void insertAfter(int key, int x) {
        Node* t = head;

        while (t != nullptr && t->data != key)
            t = t->next;

        if (t == nullptr) {
            cout << "Node not found\n";
            return;
        }

        Node* n = new Node(x);
        n->prev = t;
        n->next = t->next;

        if (t->next != nullptr)
            t->next->prev = n;

        t->next = n;
    }

    void deleteNode(int key) {
        Node* t = head;

        while (t != nullptr && t->data != key)
            t = t->next;

        if (t == nullptr) {
            cout << "Node not found\n";
            return;
        }

        if (t->prev != nullptr)
            t->prev->next = t->next;
        else
            head = t->next;

        if (t->next != nullptr)
            t->next->prev = t->prev;

        delete t;
        cout << "Node deleted\n";
    }

    void search(int key) {
        Node* t = head;
        int pos = 1;

        while (t != nullptr) {
            if (t->data == key) {
                cout << "Found at position " << pos << '\n';
                return;
            }
            t = t->next;
            pos++;
        }

        cout << "Node not found\n";
    }

    void display() {
        Node* t = head;

        if (t == nullptr) {
            cout << "List is empty\n";
            return;
        }

        while (t != nullptr) {
            cout << t->data << " <-> ";
            t = t->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DLL list;
    int ch, x, key;

    do {
        cout << "\n--- DOUBLY LINKED LIST ---\n";
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
