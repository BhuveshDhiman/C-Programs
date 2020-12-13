#include <iostream>
using namespace std;

int binarySearch(int x[], int n, int key)
{
    int s = 0, e = n, mid;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (x[mid] == key)
        {
            return mid;
        }
        else if (key < x[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "\nEnter n\n";
    cin >> n;
    int x[n], key;
    cout << "\nEnter array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cout << "\nEnter key\n";
    cin >> key;
    cout << binarySearch(x, n, key);
}
