#include <iostream>
using namespace std;

void swap(int x[], int l, int r)
{
    int temp = x[l];
    x[l] = x[r];
    x[r] = temp;
}

int partition(int x[], int l, int r)
{
    int pivot = x[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (x[j] < pivot)
        {
            i++;
            swap(x, i, j);
        }
    }
    swap(x, i + 1, r);
    return i + 1;
}

void quickSort(int x[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(x, l, r);
        quickSort(x, l, pi - 1);
        quickSort(x, pi + 1, r);
    }
}

int main()
{
    int x[] = {4, 2, 7, 8, 1, 3, 12};

    quickSort(x, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << x[i] << " ";
    }
    cout << "\n";

    return 0;
}