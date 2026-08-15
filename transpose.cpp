#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={ {1,2,3},{3,4,5} };
    int t[3][2];

    for(int i=0;i<2;i++)
    {
    for(int j=0;j<3;j++)
    {
      t[j][i]=a[i][j];
    }
    }
    cout<<"Original Matrix"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"Transposed Matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
