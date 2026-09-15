#include<iostream>
using namespace std;
#define SIZE 5
int queue[SIZE];
int front = -1, rear= -1;
bool isEmpty()
{
	return front==-1;
}
bool isFull()
{
	return rear==SIZE-1;
}
void enqueue(int value)
{
	if(isFull())
	{
		cout<<"OVERFLOW\n";
	}
	else
	{
	if (front == -1)
	front = 0;
	rear++;
	queue[rear]=value;
	cout<<value<<"inserted\n";
}
}
void dequeue()
{
	if(isEmpty())
	{
		cout<<"UNDERFLOW\n";
	}
	else
	{
		cout<<queue[front]<<"deleted\n";
		front++;
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}	
}
void peek()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty\n";
	}
	else
	{
		cout<<"Front Element:"<<queue[front]<<endl;
	}
}
void display()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty\n";
	}
	else
	{
		cout<<"Queue Elements:";
		for(int i=front;i<=rear;i++)
		{
		cout<<queue[i]<<" ";
	}
		cout<<endl;
	}
}
int main()
{
	int choice, value;
	do
	{
		cout<<"---Linear Queue---\n";
		cout<<"1.enqueue()\n";
	    cout<<"2.dequeue()\n";
	    cout<<"3.isEmpty()\n";
	    cout<<"4.isFull()\n";
	    cout<<"5.peek()\n";
	    cout<<"6.display()\n";
	    cout<<"7.exit()\n";
	    cout<<"Enter your Choice:";
	    cin>>choice;
	    switch(choice)
	    {
	    	case 1:
	    		cout<<"Enter Value:";
	    		cin>>value;
	    		enqueue(value);
	    		break;
	    	case 2:
	    		dequeue();
	    		break;
	    	case 3:
	    		if(isEmpty())
	    		cout<<"Queue is Empty\n";
	    		else
	    		cout<<"Queue is Not Empty\n";
	    		break;
	    	case 4:
	    		if(isFull())
	    		cout<<"Queue is Full\n";
	    		else
	    		cout<<"Queue is Not Full\n";
	    		break;
	    	case 5:
	    		peek();
	    		break;
	    	case 6:
	    		display();
	    		break;
	    	case 7:
	    		cout<<"Program Ended\n";
	    		break;
	    	default:
	    		cout<<"Invalid Choice!";
	    	}
	    }while(choice!=7);
	    return 0;
						
	}

