
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertBegin(int x) {
    Node* n = new Node;
    n->data = x;
    n->next = head;
    head = n;
}

void insertEnd(int x) {
    Node* n = new Node;
    n->data = x;
    n->next = NULL;

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = n;
}

void insertPosition(int key, int x, int after) {
    Node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Value not found\n";
        return;
    }

    Node* n = new Node;
    n->data = x;

    if (after) {
        n->next = temp->next;
        temp->next = n;
    } else {
        if (temp == head) {
            n->next = head;
            head = n;
        } else {
            Node* prev = head;
            while (prev->next != temp)
                prev = prev->next;

            n->next = temp;
            prev->next = n;
        }
    }
}

void deleteBegin() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
}

void deleteValue(int x) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if (head->data == x) {
        deleteBegin();
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != x)
        temp = temp->next;

    if (temp->next == NULL) {
        cout << "Value not found\n";
        return;
    }

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

void search(int x) {
    Node* temp = head;
    int pos = 1;

    while (temp != NULL) {
        if (temp->data == x) {
            cout << "Found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }

    cout << "Value not found\n";
}

void display() {
    Node* temp = head;

    if (temp == NULL) {
        cout << "List is empty\n";
        return;
    }

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int ch, x, key, choice;

    do {
        cout << "\n1. Insert at beginning";
        cout << "\n2. Insert at end";
        cout << "\n3. Insert before/after a value";
        cout << "\n4. Delete from beginning";
        cout << "\n5. Delete from end";
        cout << "\n6. Delete a specific value";
        cout << "\n7. Search a value";
        cout << "\n8. Display list";
        cout << "\n9. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter value: ";
                cin >> x;
                insertBegin(x);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> x;
                insertEnd(x);
                break;

            case 3:
                cout << "Enter existing value: ";
                cin >> key;
                cout << "Enter new value: ";
                cin >> x;
                cout << "1. Before  2. After: ";
                cin >> choice;

                insertPosition(key, x, choice == 2);
                break;

            case 4:
                deleteBegin();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                cout << "Enter value to delete: ";
                cin >> x;
                deleteValue(x);
                break;

            case 7:
                cout << "Enter value to search: ";
                cin >> x;
                search(x);
                break;

            case 8:
                display();
                break;

            case 9:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (ch != 9);

    return 0;
}

