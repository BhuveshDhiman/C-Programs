#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n\n";
    cin >> n;
    int x[n];
    cout << "\nEnter " << n << " elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 1; i < n; i++)
    {
        int current = x[i];
        int j = i - 1;
        while (x[j] > current && j >= 0)
        {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = current;
    }

    cout << "\nSorted elements are\n";
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << "\t";
    }
}