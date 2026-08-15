#include<iostream>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int n = 5;
    cout<<"Original Array";
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed Array";
    for(int i=4;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}