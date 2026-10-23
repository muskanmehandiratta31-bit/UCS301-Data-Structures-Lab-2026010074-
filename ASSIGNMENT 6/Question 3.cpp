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

int sizeDLL(Node* head) {
    int count = 0;

    while (head != nullptr) {
        count++;
        head = head->next;
    }

    return count;
}

int sizeCLL(Node* head) {
    if (head == nullptr)
        return 0;

    int count = 0;
    Node* temp = head;

    do {
        count++;
        temp = temp->next;
    } while (temp != head);

    return count;
}

int main() {
    // Doubly Linked List
    Node* d1 = new Node(10);
    Node* d2 = new Node(20);
    Node* d3 = new Node(30);

    d1->next = d2;
    d2->prev = d1;
    d2->next = d3;
    d3->prev = d2;

    // Circular Linked List
    Node* c1 = new Node(1);
    Node* c2 = new Node(2);
    Node* c3 = new Node(3);

    c1->next = c2;
    c2->next = c3;
    c3->next = c1;

    cout << "Size of Doubly Linked List: "
         << sizeDLL(d1) << endl;

    cout << "Size of Circular Linked List: "
         << sizeCLL(c1) << endl;

    return 0;
}
