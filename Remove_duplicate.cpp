#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1,2,1,2,3,4,1,1,3};
    int n = 9;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    for(int h = 0; h < n; h++)
    {
        cout << arr[h] << " ";
    }

    return 0;
}