#include <iostream>
using namespace std;

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

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (x[j] < x[i])
            {
                int temp = x[j];
                x[j] = x[i];
                x[i] = temp;
            }
        }
    }

    cout << "\nSorted array :\n";

    for (i = 0; i < n; i++)
        cout << x[i] << " ";
}
