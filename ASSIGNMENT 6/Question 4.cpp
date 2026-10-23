#include <iostream>
using namespace std;

struct Node {
    char data;
    Node *prev, *next;

    Node(char x) {
        data = x;
        prev = next = nullptr;
    }
};

bool isPalindrome(Node* head) {
    if (head == nullptr)
        return true;

    Node* left = head;
    Node* right = head;

    while (right->next != nullptr)
        right = right->next;

    while (left != right && left->prev != right) {
        if (left->data != right->data)
            return false;

        left = left->next;
        right = right->prev;
    }

    return true;
}

int main() {
    Node* a = new Node('R');
    Node* b = new Node('A');
    Node* c = new Node('D');
    Node* d = new Node('A');
    Node* e = new Node('R');

    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    d->next = e;
    e->prev = d;

    if (isPalindrome(a))
        cout << "True";
    else
        cout << "False";

    return 0;
}
