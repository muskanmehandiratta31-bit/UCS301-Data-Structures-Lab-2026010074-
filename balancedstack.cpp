#include<iostream>
using namespace std;
char stack[100];
int top=-1;
void push(char x)
{
	stack[++top]=x;
}
void pop()
{
	top--;
}
bool match(char a, char b)
{
	return(a=='('&&b==')') ||
	      (a=='{'&&b=='}') ||
	      (a=='['&&b==']') ;
}
int main()
{
	string exp;
	bool balanced=true;
	cout<<"Enter Expression:";
	cin>>exp;
	for(int i=0;i<exp.length();i++)
	{
		char ch=exp[i];
		if(ch=='('||ch=='{'||ch=='[')
	push(ch);
	else if((ch==')'||ch=='}'||ch==']'))
	{
		if(top==-1||!match(stack[top],ch))
		{
			balanced=false;
			break;
		}
		pop();
	}
}
if(top!=-1)
balanced=false;
if(balanced)
cout<<"Balanced:";
else
cout<<"Not Balanced:";
return 0;
}
