#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<i;j++)
		{
			if(A[i] == A[j])
			break;
		}
		if(j==i)
		count++;
	}
	cout<<"Different Elements:"<<count;
	return 0;
}
