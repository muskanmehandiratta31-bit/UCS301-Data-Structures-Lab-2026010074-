#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int A[n];
	cout<<"Enter the elements of array:";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		   if(A[i]>A[j])
		   {
		   	count++;
		   }
		}
	}
	cout<<"Number of Inversions:"<<count;
	return 0;
}
