#include <iostream>
using namespace std;

#define MAX 5

int q[MAX];
int front = -1, rear = -1;

bool isEmpty() {
return front == -1;
}

bool isFull() {
return (rear + 1) % MAX == front;
}

void enqueue(int x) {
if (isFull()) {
cout << "Circular Queue is Full\n";
return;
}

if (isEmpty())
    front = 0;

rear = (rear + 1) % MAX;
q[rear] = x;

cout << x << " inserted\n";

}

void dequeue() {
if (isEmpty()) {
cout << "Circular Queue is Empty\n";
return;
}

cout << "Deleted: " << q[front] << endl;

if (front == rear) {
    front = rear = -1;
} else {
    front = (front + 1) % MAX;
}

}

void peek() {
if (isEmpty())
cout << "Queue is Empty\n";
else
cout << "Front element: " << q[front] << endl;
}

void display() {
if (isEmpty()) {
cout << "Queue is Empty\n";
return;
}

cout << "Queue: ";
int i = front;

while (true) {
    cout << q[i] << " ";

    if (i == rear)
        break;

    i = (i + 1) % MAX;
}

cout << endl;

}

int main() {
int ch, x;
do {
    cout << "\n1.Enqueue  2.Dequeue  3.isEmpty";
    cout << "\n4.isFull  5.Display  6.Peek  7.Exit";
    cout << "\nEnter choice: ";
    cin >> ch;

    switch (ch) {
        case 1:
            cout << "Enter element: ";
            cin >> x;
            enqueue(x);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            cout << (isEmpty() ? "Queue is Empty" : "Queue is Not Empty") << endl;
            break;

        case 4:
            cout << (isFull() ? "Queue is Full" : "Queue is Not Full") << endl;
            break;

        case 5:
            display();
            break;

        case 6:
            peek();
            break;

        case 7:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
    }
} while (ch != 7);

return 0;

}
