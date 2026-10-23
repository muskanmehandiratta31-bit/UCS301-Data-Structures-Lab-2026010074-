#include <iostream>
#include <queue>
using namespace std;

int main() {
queue<int> q, first;

int n, x;

cout << "Enter even number of elements: ";
cin >> n;

if (n <= 0 || n % 2 != 0) {
    cout << "Enter a positive even number of elements\n";
    return 0;
}

cout << "Enter queue elements: ";

for (int i = 0; i < n; i++) {
    cin >> x;
    q.push(x);
}

for (int i = 0; i < n / 2; i++) {
    first.push(q.front());
    q.pop();
}

while (!first.empty()) {
    q.push(first.front());
    first.pop();

    q.push(q.front());
    q.pop();
}

cout << "Interleaved Queue: ";

while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
}

return 0;

}
