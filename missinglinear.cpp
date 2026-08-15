#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 5, 6};
    int n = 6;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != i + 1)
        {
            cout << "Missing number = " << i + 1;
            break;
        }
    }

    return 0;
}