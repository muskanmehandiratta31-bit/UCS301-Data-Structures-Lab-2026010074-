#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    cout<<"Enter Elements:-";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        cin>>a[i][j];
    }
    cout<<"Sum of every Row:";
    for(int i=0;i<2;i++)
    {
        int rowSum = 0;
        for(int j = 0; j < 2; j++)
        {
            rowSum = rowSum + a[i][j];
        }

        cout << "Row " << i + 1 << " = " << rowSum << endl;
    }
    cout << "\nSum of every column:\n";
    for(int j = 0; j < 2; j++)
    {
        int columnSum = 0;
        for(int i = 0; i < 2; i++)
        {
            columnSum = columnSum + a[i][j];
        }
        cout << "Column " << j + 1 << " = " << columnSum << endl;
    }

    return 0;
}