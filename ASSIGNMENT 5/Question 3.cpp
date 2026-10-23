
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *tail = NULL;
    int n, x;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;

        Node* temp = new Node;
        temp->data = x;
        temp->next = NULL;

        if (head == NULL)
            head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    if (head == NULL) {
        cout << "List is empty\n";
        return 0;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle element: " << slow->data << endl;

    return 0;
}

