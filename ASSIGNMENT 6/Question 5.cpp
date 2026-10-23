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

bool isCircular(Node* head) {
    if (head == nullptr)
        return false;

    Node* temp = head->next;

    while (temp != nullptr && temp != head)
        temp = temp->next;

    return temp == head;
}

int main() {
    Node* a = new Node(2);
    Node* b = new Node(4);
    Node* c = new Node(6);
    Node* d = new Node(7);
    Node* e = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = a;

    if (isCircular(a))
        cout << "True";
    else
        cout << "False";

    return 0;
}
