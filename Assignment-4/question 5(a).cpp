#include <iostream>
#include <queue>
using namespace std;

queue<int> q1, q2;

void push(int x) {
q2.push(x);


while (!q1.empty()) {
    q2.push(q1.front());
    q1.pop();
}

swap(q1, q2);

cout << x << " pushed\n";


}

void pop() {
if (q1.empty()) {
cout << "Stack is Empty\n";
return;
}


cout << "Popped: " << q1.front() << endl;
q1.pop();


}

void top() {
if (q1.empty())
cout << "Stack is Empty\n";
else
cout << "Top element: " << q1.front() << endl;
}

void display() {
if (q1.empty()) {
cout << "Stack is Empty\n";
return;
}


queue<int> temp = q1;

cout << "Stack (Top to Bottom): ";

while (!temp.empty()) {
    cout << temp.front() << " ";
    temp.pop();
}

cout << endl;


}

int main() {
int ch, x;

do {
    cout << "\n1.Push  2.Pop  3.Top  4.Display  5.Exit";
    cout << "\nEnter choice: ";
    cin >> ch;

    switch (ch) {
        case 1:
            cout << "Enter element: ";
            cin >> x;
            push(x);
            break;

        case 2:
            pop();
            break;

        case 3:
            top();
            break;

        case 4:
            display();
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
    }
} while (ch != 5);

return 0;


}
