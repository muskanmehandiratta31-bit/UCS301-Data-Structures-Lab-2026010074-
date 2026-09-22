#include<iostream>
using namespace std;

int queue[100];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear == 99)
    {
        cout << "Queue is Full\n";
    }
    else
    {
        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        cout << "Deleted: " << queue[front] << endl;
        front++;
    }
}

void isEmpty()
{
    if(front == -1 || front > rear)
        cout << "Queue is Empty\n";
    else
        cout << "Queue is Not Empty\n";
}

void isFull()
{
    if(rear == 99)
        cout << "Queue is Full\n";
    else
        cout << "Queue is Not Full\n";
}

void display()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

void peek()
{
    if(front == -1 || front > rear)
        cout << "Queue is Empty\n";
    else
        cout << "Front element: " << queue[front] << endl;
}

int main()
{
    int choice, x;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Is Empty";
        cout << "\n4. Is Full";
        cout << "\n5. Display";
        cout << "\n6. Peek";
        cout << "\n7. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter element: ";
                cin >> x;
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                isEmpty();
                break;

            case 4:
                isFull();
                break;

            case 5:
                display();
                break;

            case 6:
                peek();
                break;

            case 7:
                cout << "Exit";
                break;

            default:
                cout << "Invalid choice";
        }

    }while(choice != 7);

    return 0;
}
