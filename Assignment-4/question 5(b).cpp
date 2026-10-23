#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

void push(int x) {
int n = q.size();

q.push(x);

for (int i = 0; i < n; i++) {
    q.push(q.front());
    q.pop();
}

cout << x << " pushed\n";

}

void pop() {
if (q.empty()) {
cout << "Stack is Empty\n";
return;
}

cout << "Popped: " << q.front() << endl;
q.pop();


}

void top() {
if (q.empty())
cout << "Stack is Empty\n";
else
cout << "Top element: " << q.front() << endl;
}

void display() {
if (q.empty()) {
cout << "Stack is Empty\n";
return;
}

queue<int> temp = q;

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
