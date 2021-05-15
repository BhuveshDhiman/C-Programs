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

    int i, j, cnt = 1;

    while (cnt < n)
    {
        for (i = 0; i < n - cnt; i++)
        {
            if (x[i] > x[i + 1])
            {
                int temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
            }
        }
        cnt++;
    }

    cout << "\nSorted array :\n";

    for (i = 0; i < n; i++)
        cout << x[i] << " ";
}
