#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string str;
	cout<<"Enter a String:";
	cin>>str;
	stack<char>s;
	for(int i=0;i<str.length();i++)
	{
		s.push(str[i]);
	}
	cout<<"Reversed String:";
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
	return 0;
}
