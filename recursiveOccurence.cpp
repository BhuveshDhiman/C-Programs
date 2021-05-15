#include <iostream>
using namespace std;
// Check if array is sorted or not
int firstOcc(int x[], int n, int pos, int key)

{
    if (pos == n)
        return -1;
    else if (x[pos] == key)
        return pos;

    return firstOcc(x, n, pos + 1, key);
}

int lastOcc(int x[], int n, int pos, int key)
{

    if (pos == n)
        return -1;

    int restArray = lastOcc(x, n, pos + 1, key);

    if (restArray != -1)
        return restArray;

    if (x[pos] == key)
        return pos;

    return -1;
}

int main()
{
    int x[] = {5, 2, 1, 7, 9, 5};
    cout << firstOcc(x, 6, 0, 5) << "\n";
    cout << lastOcc(x, 6, 0, 5);

    return 0;
}