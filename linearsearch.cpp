#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,key;
	cout<<"Enter no of  elements:";
	cin>>n;
    cout<<"Enter elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter elements to search:";
	cin>>key;
    for(int i=0;i<n;i++)
    {
    	if(arr[i]==key)
        {
	cout<<"Element found at position"<<i+1;
    return 0;
    }
    }
	cout<<"Element not found.";

	return 0;
}