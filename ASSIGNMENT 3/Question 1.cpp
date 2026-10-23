#include<iostream>
using namespace std;
#define MAX 5
class Stack
{
  int arr[MAX];
  int top;
  public:
  Stack()
  {
  	top=-1;
  }	
  void push(int value)
  {
  	if(isFull())
  	{
  		cout<<"Stack overflow\n";
    }
    else
    {
    	top++;
    	arr[top]=value;
    	cout<<value<<"Pushed into stack\n";
	}
  }
  void pop()
  {
  	if(isEmpty())
  	{
  		cout<<"Stack underflow\n";
    }
    else
    {
    	cout<<arr[top]<<"Poped from stack\n";
    	top--;
	}
  }
  bool isEmpty()
  {
  	return top==-1;
  }
  bool isFull()
  {
  	return top==MAX-1;
  }
  void peek()
  {
  	if(isEmpty())
  	{
  		cout<<"Stack is Empty\n";
	}
	else
	{
		cout<<"Top element is:"<<arr[top]<<endl;
	}
  }
  void Display()
  {
  	if(isEmpty())
  	{
  		cout<<"Stack is Empty\n";
	}
	else
	{
		cout<<"Stack elements are:\n";
		for(int i=top;i>=0;i--)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
  } 
};
int main()
{
	Stack s;
	int choice,value;
	do
	{
		cout<<"\n----STACK MENU----\n";
		cout<<"1.PUSH\n";
		cout<<"2.Pop\n";
		cout<<"3.isEmpty\n";
		cout<<"4.isFull\n";
		cout<<"5.Display\n";
		cout<<"6.Peek\n";
		cout<<"7.Exit\n";
		
		cout<<"Enter your Choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter value:";
				cin>>value;
				s.push(value);
				break;
			case 2:
				s.pop();
				break;
			case 3:
			    if(s.isEmpty())
				cout<<"Stack is Empty\n";
				else
				cout<<"Stack isn't Empty\n";
				break;
				
			case 4:
				if(s.isFull())
				cout<<"Stack is Full\n";
				else
				cout<<"Stack isn't Full\n";
				break;
			case 5:
				s.Display();
				break;
			case 6:
				s.peek();
				break;
			case 7:
				cout<<"Program Ended";
				break;
				default:
					cout<<"Invalid Choice!";
		}
		
	} while(choice!=7);
	return 0;
}
