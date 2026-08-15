#include<iostream>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int K = 2;
    cout << "Left Rotation: ";
    for (int i = K; i < n; i++)
    {
        cout << A[i] << " ";
    }
    for (int i = 0; i < K; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Right Rotation: ";
    for (int i = n - K; i < n; i++)
    {
        cout << A[i] << " ";
    }
    for (int i = 0; i < n - K; i++)
    {
        cout << A[i] << " ";
    }
return 0;
}