#include <iostream>
using namespace std;

int setbit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }

    int setBit = 0;
    int tempxor = xorsum;
    int pos = 0;
    while (setBit != 1)
    {
        setBit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setbit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }

    cout << newxor << "\n";
    cout << (tempxor ^ newxor) << "\n";
}

int main()
{
    int arr[] = {1, 2, 8, 3, 2, 1, 5, 3};
    unique(arr, 8);
}