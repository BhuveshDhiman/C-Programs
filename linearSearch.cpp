#include <iostream>
using namespace std;

int linearSearch(int x[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (x[i] == key)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int n;

    cout << "Enter size of array\n";
    cin >> n;
    int x[n], key;
    cout << "\nEnter array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cout << "\nEnter key\n";
    cin >> key;
    cout << linearSearch(x, n, key);
}