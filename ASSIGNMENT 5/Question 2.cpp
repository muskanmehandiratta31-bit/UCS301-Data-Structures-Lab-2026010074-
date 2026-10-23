
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n, x, key, count = 0;
    Node *head = NULL, *tail = NULL;

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

    cout << "Enter key: ";
    cin >> key;

    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data == key) {
            count++;

            Node* del = temp;

            if (prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            temp = temp->next;
            delete del;
        } else {
            prev = temp;
            temp = temp->next;
        }
    }

    cout << "Count: " << count << endl;
    cout << "Updated List: ";

    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";

    return 0;
}
