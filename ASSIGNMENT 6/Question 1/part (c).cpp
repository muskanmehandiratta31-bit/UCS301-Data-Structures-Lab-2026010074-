#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};

void searchDLL(Node* head, int key) {
    int pos = 1;

    while (head != nullptr) {
        if (head->data == key) {
            cout << "Found at position " << pos << endl;
            return;
        }

        head = head->next;
        pos++;
    }

    cout << "Node not found\n";
}

void searchCLL(Node* head, int key) {
    if (!head) {
        cout << "List is empty\n";
        return;
    }

    Node* t = head;
    int pos = 1;

    do {
        if (t->data == key) {
            cout << "Found at position " << pos << endl;
            return;
        }

        t = t->next;
        pos++;
    } while (t != head);

    cout << "Node not found\n";
}

int main() {
    Node *a = new Node(10), *b = new Node(20);
    Node *c = new Node(30);

    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    Node* dllHead = a;

    Node *p = new Node(10), *q = new Node(20);
    Node *r = new Node(30);

    p->next = q;
    q->next = r;
    r->next = p;
    Node* cllHead = p;

    int type, key;
    cout << "1. DLL  2. CLL: ";
    cin >> type;
    cout << "Enter value to search: ";
    cin >> key;

    if (type == 1)
        searchDLL(dllHead, key);
    else
        searchCLL(cllHead, key);

    return 0;
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};

void searchDLL(Node* head, int key) {
    int pos = 1;

    while (head != nullptr) {
        if (head->data == key) {
            cout << "Found at position " << pos << endl;
            return;
        }

        head = head->next;
        pos++;
    }

    cout << "Node not found\n";
}

void searchCLL(Node* head, int key) {
    if (!head) {
        cout << "List is empty\n";
        return;
    }

    Node* t = head;
    int pos = 1;

    do {
        if (t->data == key) {
            cout << "Found at position " << pos << endl;
            return;
        }

        t = t->next;
        pos++;
    } while (t != head);

    cout << "Node not found\n";
}

int main() {
    Node *a = new Node(10), *b = new Node(20);
    Node *c = new Node(30);

    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    Node* dllHead = a;

    Node *p = new Node(10), *q = new Node(20);
    Node *r = new Node(30);

    p->next = q;
    q->next = r;
    r->next = p;
    Node* cllHead = p;

    int type, key;
    cout << "1. DLL  2. CLL: ";
    cin >> type;
    cout << "Enter value to search: ";
    cin >> key;

    if (type == 1)
        searchDLL(dllHead, key);
    else
        searchCLL(cllHead, key);

    return 0;
}
